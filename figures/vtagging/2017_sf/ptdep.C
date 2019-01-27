void ptdep()
{
//=========Macro generated from canvas: ptdep/ptdep
//=========  (Fri Dec 14 16:11:24 2018) by ROOT version6.02/05
   TCanvas *ptdep = new TCanvas("ptdep", "ptdep",50,72,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ptdep->SetHighLightColor(2);
   ptdep->Range(-253.8571,-0.075,2503.286,0.55);
   ptdep->SetFillColor(0);
   ptdep->SetBorderMode(0);
   ptdep->SetBorderSize(2);
   ptdep->SetLeftMargin(0.12);
   ptdep->SetRightMargin(0.04);
   ptdep->SetTopMargin(0.08);
   ptdep->SetBottomMargin(0.12);
   ptdep->SetFrameFillStyle(0);
   ptdep->SetFrameBorderMode(0);
   ptdep->SetFrameFillStyle(0);
   ptdep->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[5] = {
   300,
   500,
   1000,
   1500,
   2000};
   Double_t Graph0_fy1001[5] = {
   0,
   0.2173037,
   0.1300752,
   0.1315766,
   0.1433798};
   Double_t Graph0_fex1001[5] = {
   30,
   50,
   100,
   150,
   200};
   Double_t Graph0_fey1001[5] = {
   0,
   0.02173037,
   0.01300752,
   0.01315766,
   0.01433798};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(30);
   gre->SetMarkerColor(30);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.6);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","Graph",100,77,2393);
   Graph_Graph1001->SetMinimum(0);
   Graph_Graph1001->SetMaximum(0.5);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);
   Graph_Graph1001->SetLineStyle(0);
   Graph_Graph1001->SetMarkerStyle(20);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1001->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   
   TF1 *ptdep_LP1002 = new TF1("ptdep_LP","[0]*log(x/300)",77,2393);
   ptdep_LP1002->SetFillColor(19);
   ptdep_LP1002->SetFillStyle(0);
   ptdep_LP1002->SetMarkerStyle(20);
   ptdep_LP1002->SetLineColor(2);
   ptdep_LP1002->SetLineWidth(1);
   ptdep_LP1002->SetChisquare(57.87207);
   ptdep_LP1002->SetNDF(4);
   ptdep_LP1002->GetXaxis()->SetLabelFont(42);
   ptdep_LP1002->GetXaxis()->SetLabelOffset(0.007);
   ptdep_LP1002->GetXaxis()->SetTitleOffset(1.1);
   ptdep_LP1002->GetXaxis()->SetTitleFont(42);
   ptdep_LP1002->GetYaxis()->SetLabelFont(42);
   ptdep_LP1002->GetYaxis()->SetLabelOffset(0.007);
   ptdep_LP1002->GetYaxis()->SetTitleOffset(1.25);
   ptdep_LP1002->GetYaxis()->SetTitleFont(42);
   ptdep_LP1002->SetParameter(0,0.09379634);
   ptdep_LP1002->SetParError(0,0.006245076);
   ptdep_LP1002->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(ptdep_LP1002);
   gre->Draw("ape");
   
   Double_t Graph1_fx1003[5] = {
   300,
   500,
   1000,
   1500,
   2000};
   Double_t Graph1_fy1003[5] = {
   0,
   0.05284346,
   0.06523805,
   0.09349982,
   0.09698629};
   Double_t Graph1_fex1003[5] = {
   30,
   50,
   100,
   150,
   200};
   Double_t Graph1_fey1003[5] = {
   0,
   0.005284345,
   0.006523805,
   0.009349982,
   0.009698629};
   gre = new TGraphErrors(5,Graph1_fx1003,Graph1_fy1003,Graph1_fex1003,Graph1_fey1003);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff420e");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff420e");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.6);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","Graph",100,77,2393);
   Graph_Graph1003->SetMinimum(0);
   Graph_Graph1003->SetMaximum(0.1173534);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);
   Graph_Graph1003->SetLineStyle(0);
   Graph_Graph1003->SetMarkerStyle(20);
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1003->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1003->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);
   
   
   TF1 *ptdep_HP1004 = new TF1("ptdep_HP","[0]*log(x/300)",77,2393);
   ptdep_HP1004->SetFillColor(19);
   ptdep_HP1004->SetFillStyle(0);
   ptdep_HP1004->SetMarkerStyle(20);
   ptdep_HP1004->SetLineColor(2);
   ptdep_HP1004->SetLineWidth(1);
   ptdep_HP1004->SetChisquare(10.35961);
   ptdep_HP1004->SetNDF(4);
   ptdep_HP1004->GetXaxis()->SetLabelFont(42);
   ptdep_HP1004->GetXaxis()->SetLabelOffset(0.007);
   ptdep_HP1004->GetXaxis()->SetTitleOffset(1.1);
   ptdep_HP1004->GetXaxis()->SetTitleFont(42);
   ptdep_HP1004->GetYaxis()->SetLabelFont(42);
   ptdep_HP1004->GetYaxis()->SetLabelOffset(0.007);
   ptdep_HP1004->GetYaxis()->SetTitleOffset(1.25);
   ptdep_HP1004->GetYaxis()->SetTitleFont(42);
   ptdep_HP1004->SetParameter(0,0.05824957);
   ptdep_HP1004->SetParError(0,0.003640311);
   ptdep_HP1004->SetParLimits(0,0,0);
   gre->GetListOfFunctions()->Add(ptdep_HP1004);
   gre->Draw("pe");
   
   TLegend *leg = new TLegend(0.5565327,0.7255245,0.9233668,0.8618881,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Graph1","HP: 0.058*log(x/300)","PE");

   ci = TColor::GetColor("#ff420e");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff420e");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.6);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","LP: 0.094*log(x/300)","PE");
   entry->SetLineColor(30);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(30);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.6);
   entry->SetTextFont(42);
   leg->Draw();
   ptdep->Modified();
   ptdep->cd();
   ptdep->SetSelected(ptdep);
}
