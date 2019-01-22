void looseSel_Jet_2_tau_1_2016()
{
//=========Macro generated from canvas: looseSel_Jet_2_tau_1/looseSel_Jet_2_tau_1
//=========  (Wed Sep  5 11:23:19 2018) by ROOT version6.02/05
   TCanvas *looseSel_Jet_2_tau_1 = new TCanvas("looseSel_Jet_2_tau_1", "looseSel_Jet_2_tau_1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   looseSel_Jet_2_tau_1->SetHighLightColor(2);
   looseSel_Jet_2_tau_1->Range(0,0,1,1);
   looseSel_Jet_2_tau_1->SetFillColor(0);
   looseSel_Jet_2_tau_1->SetBorderMode(0);
   looseSel_Jet_2_tau_1->SetBorderSize(2);
   looseSel_Jet_2_tau_1->SetLeftMargin(0.16);
   looseSel_Jet_2_tau_1->SetRightMargin(0.02);
   looseSel_Jet_2_tau_1->SetTopMargin(0.05);
   looseSel_Jet_2_tau_1->SetBottomMargin(0.13);
   looseSel_Jet_2_tau_1->SetFrameFillStyle(0);
   looseSel_Jet_2_tau_1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: c1_1
   TPad *c1_1 = new TPad("c1_1", "newpad1",0,0,1,0.2);
   c1_1->Draw();
   c1_1->cd();
   c1_1->Range(-0.1428571,-0.7000001,1.047619,1.8);
   c1_1->SetFillColor(0);
   c1_1->SetFillStyle(4000);
   c1_1->SetBorderMode(0);
   c1_1->SetBorderSize(2);
   c1_1->SetGridx();
   c1_1->SetGridy();
   c1_1->SetTickx(1);
   c1_1->SetTicky(1);
   c1_1->SetLeftMargin(0.12);
   c1_1->SetRightMargin(0.04);
   c1_1->SetTopMargin(0);
   c1_1->SetBottomMargin(0.36);
   c1_1->SetFrameFillStyle(4000);
   c1_1->SetFrameBorderMode(0);
   c1_1->SetFrameFillStyle(4000);
   c1_1->SetFrameBorderMode(0);
   
   TH1D *ratiohist4372290 = new TH1D("ratiohist4372290","",20,0,1);
   ratiohist4372290->SetBinContent(1,0.8335406);
   ratiohist4372290->SetBinContent(2,1.01325);
   ratiohist4372290->SetBinContent(3,1.012971);
   ratiohist4372290->SetBinContent(4,1.013901);
   ratiohist4372290->SetBinContent(5,0.9997778);
   ratiohist4372290->SetBinContent(6,0.9911511);
   ratiohist4372290->SetBinContent(7,0.9860887);
   ratiohist4372290->SetBinContent(8,0.9589355);
   ratiohist4372290->SetBinContent(9,0.9286098);
   ratiohist4372290->SetBinContent(10,0.8578763);
   ratiohist4372290->SetBinContent(11,0.7291601);
   ratiohist4372290->SetBinContent(12,0.7775423);
   ratiohist4372290->SetBinContent(13,0.4555116);
   ratiohist4372290->SetBinError(1,0.03308162);
   ratiohist4372290->SetBinError(2,0.005343102);
   ratiohist4372290->SetBinError(3,0.003461296);
   ratiohist4372290->SetBinError(4,0.004074122);
   ratiohist4372290->SetBinError(5,0.005138368);
   ratiohist4372290->SetBinError(6,0.006877448);
   ratiohist4372290->SetBinError(7,0.009959567);
   ratiohist4372290->SetBinError(8,0.0113675);
   ratiohist4372290->SetBinError(9,0.02260465);
   ratiohist4372290->SetBinError(10,0.04009479);
   ratiohist4372290->SetBinError(11,0.1090893);
   ratiohist4372290->SetBinError(12,0.1957777);
   ratiohist4372290->SetBinError(13,0.4904393);
   ratiohist4372290->SetMinimum(0.2);
   ratiohist4372290->SetMaximum(1.8);
   ratiohist4372290->SetEntries(453.8906);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff9900");
   ratiohist4372290->SetFillColor(ci);
   ratiohist4372290->SetLineWidth(2);
   ratiohist4372290->SetMarkerStyle(20);
   ratiohist4372290->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   ratiohist4372290->GetXaxis()->SetNdivisions(505);
   ratiohist4372290->GetXaxis()->SetLabelFont(42);
   ratiohist4372290->GetXaxis()->SetLabelSize(0.14);
   ratiohist4372290->GetXaxis()->SetTitleSize(0.17);
   ratiohist4372290->GetXaxis()->SetTitleOffset(0.98);
   ratiohist4372290->GetXaxis()->SetTitleFont(42);
   ratiohist4372290->GetYaxis()->SetTitle("Data/MC");
   ratiohist4372290->GetYaxis()->CenterTitle(true);
   ratiohist4372290->GetYaxis()->SetNdivisions(105);
   ratiohist4372290->GetYaxis()->SetLabelFont(42);
   ratiohist4372290->GetYaxis()->SetLabelSize(0.14);
   ratiohist4372290->GetYaxis()->SetTitleSize(0.16);
   ratiohist4372290->GetYaxis()->SetTitleOffset(0.2);
   ratiohist4372290->GetYaxis()->SetTitleFont(42);
   ratiohist4372290->GetZaxis()->SetLabelFont(42);
   ratiohist4372290->GetZaxis()->SetLabelSize(0.035);
   ratiohist4372290->GetZaxis()->SetTitleSize(0.035);
   ratiohist4372290->GetZaxis()->SetTitleFont(42);
   ratiohist4372290->Draw("");
   
   Double_t Graph0_fx1018[21] = {
   0,
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t Graph0_fy1018[21] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph0_fex1018[21] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t Graph0_fey1018[21] = {
   0.01989719,
   0.01989719,
   0.004028225,
   0.002824466,
   0.003553672,
   0.004638129,
   0.006382953,
   0.009504813,
   0.0109537,
   0.02346511,
   0.04545266,
   0.1471186,
   0.2349504,
   0.9794058,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(21,Graph0_fx1018,Graph0_fy1018,Graph0_fex1018,Graph0_fey1018);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(3013);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1018 = new TH1F("Graph_Graph1018","Graph",100,-0.1575,1.1325);
   Graph_Graph1018->SetMinimum(0);
   Graph_Graph1018->SetMaximum(2.175287);
   Graph_Graph1018->SetDirectory(0);
   Graph_Graph1018->SetStats(0);
   Graph_Graph1018->SetLineStyle(0);
   Graph_Graph1018->SetMarkerStyle(20);
   Graph_Graph1018->GetXaxis()->SetLabelFont(42);
   Graph_Graph1018->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1018->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1018->GetXaxis()->SetTitleFont(42);
   Graph_Graph1018->GetYaxis()->SetLabelFont(42);
   Graph_Graph1018->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1018->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1018->GetYaxis()->SetTitleFont(42);
   Graph_Graph1018->GetZaxis()->SetLabelFont(42);
   Graph_Graph1018->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1018);
   
   gre->Draw("3");
   
   TH1D *H_ratiohist1033291 = new TH1D("H_ratiohist1033291","",20,0,1);
   H_ratiohist1033291->SetBinContent(1,0.6797991);
   H_ratiohist1033291->SetBinContent(2,0.9306018);
   H_ratiohist1033291->SetBinContent(3,0.9904317);
   H_ratiohist1033291->SetBinContent(4,1.030017);
   H_ratiohist1033291->SetBinContent(5,1.0035);
   H_ratiohist1033291->SetBinContent(6,1.022878);
   H_ratiohist1033291->SetBinContent(7,0.9978319);
   H_ratiohist1033291->SetBinContent(8,0.9844236);
   H_ratiohist1033291->SetBinContent(9,0.9516967);
   H_ratiohist1033291->SetBinContent(10,1.076118);
   H_ratiohist1033291->SetBinContent(11,0.555221);
   H_ratiohist1033291->SetBinContent(12,3.217976);
   H_ratiohist1033291->SetBinContent(13,22.00096);
   H_ratiohist1033291->SetBinError(1,0.05775977);
   H_ratiohist1033291->SetBinError(2,0.01124805);
   H_ratiohist1033291->SetBinError(3,0.00780114);
   H_ratiohist1033291->SetBinError(4,0.009073801);
   H_ratiohist1033291->SetBinError(5,0.01152398);
   H_ratiohist1033291->SetBinError(6,0.01406368);
   H_ratiohist1033291->SetBinError(7,0.01928274);
   H_ratiohist1033291->SetBinError(8,0.03119233);
   H_ratiohist1033291->SetBinError(9,0.06363251);
   H_ratiohist1033291->SetBinError(10,0.0847143);
   H_ratiohist1033291->SetBinError(11,0.1350246);
   H_ratiohist1033291->SetBinError(12,1.841666);
   H_ratiohist1033291->SetBinError(13,18.44124);
   H_ratiohist1033291->SetMinimum(0);
   H_ratiohist1033291->SetMaximum(568526);
   H_ratiohist1033291->SetEntries(3.656697);

   ci = 994;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   H_ratiohist1033291->SetFillColor(ci);
   H_ratiohist1033291->SetLineStyle(9);
   H_ratiohist1033291->SetLineWidth(2);
   H_ratiohist1033291->SetMarkerStyle(20);
   H_ratiohist1033291->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   H_ratiohist1033291->GetXaxis()->SetLabelFont(42);
   H_ratiohist1033291->GetXaxis()->SetLabelSize(0);
   H_ratiohist1033291->GetXaxis()->SetTitleSize(0);
   H_ratiohist1033291->GetXaxis()->SetTitleFont(42);
   H_ratiohist1033291->GetYaxis()->SetTitle("Events / 0.05");
   H_ratiohist1033291->GetYaxis()->SetLabelFont(42);
   H_ratiohist1033291->GetYaxis()->SetLabelSize(0.035);
   H_ratiohist1033291->GetYaxis()->SetTitleFont(42);
   H_ratiohist1033291->GetZaxis()->SetLabelFont(42);
   H_ratiohist1033291->GetZaxis()->SetLabelSize(0.035);
   H_ratiohist1033291->GetZaxis()->SetTitleSize(0.035);
   H_ratiohist1033291->GetZaxis()->SetTitleFont(42);
   H_ratiohist1033291->Draw("HISTsame");
   
   TH1D *MG_ratiohist4300292 = new TH1D("MG_ratiohist4300292","",20,0,1);
   MG_ratiohist4300292->SetBinContent(1,0.8121938);
   MG_ratiohist4300292->SetBinContent(2,1.088769);
   MG_ratiohist4300292->SetBinContent(3,1.044357);
   MG_ratiohist4300292->SetBinContent(4,0.9811867);
   MG_ratiohist4300292->SetBinContent(5,0.9515478);
   MG_ratiohist4300292->SetBinContent(6,0.9627769);
   MG_ratiohist4300292->SetBinContent(7,0.9906969);
   MG_ratiohist4300292->SetBinContent(8,1.025575);
   MG_ratiohist4300292->SetBinContent(9,1.07239);
   MG_ratiohist4300292->SetBinContent(10,1.082468);
   MG_ratiohist4300292->SetBinContent(11,1.044742);
   MG_ratiohist4300292->SetBinContent(12,1.03419);
   MG_ratiohist4300292->SetBinContent(13,10.37698);
   MG_ratiohist4300292->SetBinError(1,0.03097021);
   MG_ratiohist4300292->SetBinError(2,0.005566959);
   MG_ratiohist4300292->SetBinError(3,0.003204177);
   MG_ratiohist4300292->SetBinError(4,0.00297947);
   MG_ratiohist4300292->SetBinError(5,0.00343732);
   MG_ratiohist4300292->SetBinError(6,0.004349471);
   MG_ratiohist4300292->SetBinError(7,0.005752349);
   MG_ratiohist4300292->SetBinError(8,0.008110429);
   MG_ratiohist4300292->SetBinError(9,0.01260932);
   MG_ratiohist4300292->SetBinError(10,0.02189017);
   MG_ratiohist4300292->SetBinError(11,0.05235352);
   MG_ratiohist4300292->SetBinError(12,0.1743097);
   MG_ratiohist4300292->SetBinError(13,7.97712);
   MG_ratiohist4300292->SetMinimum(0);
   MG_ratiohist4300292->SetMaximum(568526);
   MG_ratiohist4300292->SetEntries(7.92855);

   ci = 995;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   MG_ratiohist4300292->SetFillColor(ci);
   MG_ratiohist4300292->SetLineStyle(2);
   MG_ratiohist4300292->SetLineWidth(2);
   MG_ratiohist4300292->SetMarkerStyle(20);
   MG_ratiohist4300292->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   MG_ratiohist4300292->GetXaxis()->SetLabelFont(42);
   MG_ratiohist4300292->GetXaxis()->SetLabelSize(0);
   MG_ratiohist4300292->GetXaxis()->SetTitleSize(0);
   MG_ratiohist4300292->GetXaxis()->SetTitleFont(42);
   MG_ratiohist4300292->GetYaxis()->SetTitle("Events / 0.05");
   MG_ratiohist4300292->GetYaxis()->SetLabelFont(42);
   MG_ratiohist4300292->GetYaxis()->SetLabelSize(0.035);
   MG_ratiohist4300292->GetYaxis()->SetTitleFont(42);
   MG_ratiohist4300292->GetZaxis()->SetLabelFont(42);
   MG_ratiohist4300292->GetZaxis()->SetLabelSize(0.035);
   MG_ratiohist4300292->GetZaxis()->SetTitleSize(0.035);
   MG_ratiohist4300292->GetZaxis()->SetTitleFont(42);
   MG_ratiohist4300292->Draw("HISTsame");
   
   TH1D *ratiohist4372293 = new TH1D("ratiohist4372293","",20,0,1);
   ratiohist4372293->SetBinContent(1,0.8335406);
   ratiohist4372293->SetBinContent(2,1.01325);
   ratiohist4372293->SetBinContent(3,1.012971);
   ratiohist4372293->SetBinContent(4,1.013901);
   ratiohist4372293->SetBinContent(5,0.9997778);
   ratiohist4372293->SetBinContent(6,0.9911511);
   ratiohist4372293->SetBinContent(7,0.9860887);
   ratiohist4372293->SetBinContent(8,0.9589355);
   ratiohist4372293->SetBinContent(9,0.9286098);
   ratiohist4372293->SetBinContent(10,0.8578763);
   ratiohist4372293->SetBinContent(11,0.7291601);
   ratiohist4372293->SetBinContent(12,0.7775423);
   ratiohist4372293->SetBinContent(13,0.4555116);
   ratiohist4372293->SetBinError(1,0.03308162);
   ratiohist4372293->SetBinError(2,0.005343102);
   ratiohist4372293->SetBinError(3,0.003461296);
   ratiohist4372293->SetBinError(4,0.004074122);
   ratiohist4372293->SetBinError(5,0.005138368);
   ratiohist4372293->SetBinError(6,0.006877448);
   ratiohist4372293->SetBinError(7,0.009959567);
   ratiohist4372293->SetBinError(8,0.0113675);
   ratiohist4372293->SetBinError(9,0.02260465);
   ratiohist4372293->SetBinError(10,0.04009479);
   ratiohist4372293->SetBinError(11,0.1090893);
   ratiohist4372293->SetBinError(12,0.1957777);
   ratiohist4372293->SetBinError(13,0.4904393);
   ratiohist4372293->SetMinimum(0.2);
   ratiohist4372293->SetMaximum(1.8);
   ratiohist4372293->SetEntries(453.8906);

   ci = TColor::GetColor("#ff9900");
   ratiohist4372293->SetFillColor(ci);
   ratiohist4372293->SetLineWidth(2);
   ratiohist4372293->SetMarkerStyle(20);
   ratiohist4372293->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   ratiohist4372293->GetXaxis()->SetNdivisions(505);
   ratiohist4372293->GetXaxis()->SetLabelFont(42);
   ratiohist4372293->GetXaxis()->SetLabelSize(0.14);
   ratiohist4372293->GetXaxis()->SetTitleSize(0.17);
   ratiohist4372293->GetXaxis()->SetTitleOffset(0.98);
   ratiohist4372293->GetXaxis()->SetTitleFont(42);
   ratiohist4372293->GetYaxis()->SetTitle("Data/MC");
   ratiohist4372293->GetYaxis()->CenterTitle(true);
   ratiohist4372293->GetYaxis()->SetNdivisions(105);
   ratiohist4372293->GetYaxis()->SetLabelFont(42);
   ratiohist4372293->GetYaxis()->SetLabelSize(0.14);
   ratiohist4372293->GetYaxis()->SetTitleSize(0.16);
   ratiohist4372293->GetYaxis()->SetTitleOffset(0.2);
   ratiohist4372293->GetYaxis()->SetTitleFont(42);
   ratiohist4372293->GetZaxis()->SetLabelFont(42);
   ratiohist4372293->GetZaxis()->SetLabelSize(0.035);
   ratiohist4372293->GetZaxis()->SetTitleSize(0.035);
   ratiohist4372293->GetZaxis()->SetTitleFont(42);
   ratiohist4372293->Draw("same");
   c1_1->Modified();
   looseSel_Jet_2_tau_1->cd();
  
// ------------>Primitives in pad: c1_2
   TPad *c1_2 = new TPad("c1_2", "newpad2",0,0.2,1,1);
   c1_2->Draw();
   c1_2->cd();
   c1_2->Range(-0.1428571,-8524.612,1.047619,647214.7);
   c1_2->SetFillColor(0);
   c1_2->SetFillStyle(4000);
   c1_2->SetBorderMode(0);
   c1_2->SetBorderSize(2);
   c1_2->SetTickx(1);
   c1_2->SetTicky(1);
   c1_2->SetLeftMargin(0.12);
   c1_2->SetRightMargin(0.04);
   c1_2->SetTopMargin(0.12);
   c1_2->SetBottomMargin(0.013);
   c1_2->SetFrameFillStyle(0);
   c1_2->SetFrameBorderMode(0);
   c1_2->SetFrameFillStyle(0);
   c1_2->SetFrameBorderMode(0);
   
   TH1D *looseSel_Jet_2_tau_1hdata294 = new TH1D("looseSel_Jet_2_tau_1hdata294","",20,0,1);
   looseSel_Jet_2_tau_1hdata294->SetBinContent(1,848);
   looseSel_Jet_2_tau_1hdata294->SetBinContent(2,86353);
   looseSel_Jet_2_tau_1hdata294->SetBinContent(3,270409);
   looseSel_Jet_2_tau_1hdata294->SetBinContent(4,284263);
   looseSel_Jet_2_tau_1hdata294->SetBinContent(5,203985);
   looseSel_Jet_2_tau_1hdata294->SetBinContent(6,135034);
   looseSel_Jet_2_tau_1hdata294->SetBinContent(7,85690);
   looseSel_Jet_2_tau_1hdata294->SetBinContent(8,48684);
   looseSel_Jet_2_tau_1hdata294->SetBinContent(9,23841);
   looseSel_Jet_2_tau_1hdata294->SetBinContent(10,8444);
   looseSel_Jet_2_tau_1hdata294->SetBinContent(11,1353);
   looseSel_Jet_2_tau_1hdata294->SetBinContent(12,122);
   looseSel_Jet_2_tau_1hdata294->SetBinContent(13,5);
   looseSel_Jet_2_tau_1hdata294->SetBinError(1,29.12044);
   looseSel_Jet_2_tau_1hdata294->SetBinError(2,293.8588);
   looseSel_Jet_2_tau_1hdata294->SetBinError(3,520.0087);
   looseSel_Jet_2_tau_1hdata294->SetBinError(4,533.1632);
   looseSel_Jet_2_tau_1hdata294->SetBinError(5,451.647);
   looseSel_Jet_2_tau_1hdata294->SetBinError(6,367.4697);
   looseSel_Jet_2_tau_1hdata294->SetBinError(7,292.7285);
   looseSel_Jet_2_tau_1hdata294->SetBinError(8,220.6445);
   looseSel_Jet_2_tau_1hdata294->SetBinError(9,154.4053);
   looseSel_Jet_2_tau_1hdata294->SetBinError(10,91.89124);
   looseSel_Jet_2_tau_1hdata294->SetBinError(11,36.78315);
   looseSel_Jet_2_tau_1hdata294->SetBinError(12,11.04536);
   looseSel_Jet_2_tau_1hdata294->SetBinError(13,2.236068);
   looseSel_Jet_2_tau_1hdata294->SetMinimum(0);
   looseSel_Jet_2_tau_1hdata294->SetMaximum(568526);
   looseSel_Jet_2_tau_1hdata294->SetEntries(1149031);
   looseSel_Jet_2_tau_1hdata294->SetDirectory(0);

   ci = TColor::GetColor("#ff9900");
   looseSel_Jet_2_tau_1hdata294->SetFillColor(ci);
   looseSel_Jet_2_tau_1hdata294->SetLineWidth(2);
   looseSel_Jet_2_tau_1hdata294->SetMarkerStyle(20);
   looseSel_Jet_2_tau_1hdata294->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   looseSel_Jet_2_tau_1hdata294->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hdata294->GetXaxis()->SetLabelSize(0);
   looseSel_Jet_2_tau_1hdata294->GetXaxis()->SetTitleSize(0);
   looseSel_Jet_2_tau_1hdata294->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hdata294->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_2_tau_1hdata294->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hdata294->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hdata294->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hdata294->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hdata294->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hdata294->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hdata294->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hdata294->Draw("EP");
   
   THStack *test1 = new THStack();
   test1->SetName("test1");
   test1->SetTitle("test1");
   
   TH1F *test1_stack_18 = new TH1F("test1_stack_18","test1",20,0,1);
   test1_stack_18->SetMinimum(0);
   test1_stack_18->SetMaximum(294383.9);
   test1_stack_18->SetDirectory(0);
   test1_stack_18->SetStats(0);
   test1_stack_18->SetLineStyle(0);
   test1_stack_18->SetMarkerStyle(20);
   test1_stack_18->GetXaxis()->SetLabelFont(42);
   test1_stack_18->GetXaxis()->SetLabelOffset(0.007);
   test1_stack_18->GetXaxis()->SetTitleOffset(1.1);
   test1_stack_18->GetXaxis()->SetTitleFont(42);
   test1_stack_18->GetYaxis()->SetLabelFont(42);
   test1_stack_18->GetYaxis()->SetLabelOffset(0.007);
   test1_stack_18->GetYaxis()->SetTitleOffset(1.25);
   test1_stack_18->GetYaxis()->SetTitleFont(42);
   test1_stack_18->GetZaxis()->SetLabelFont(42);
   test1_stack_18->GetZaxis()->SetLabelOffset(0.007);
   test1_stack_18->GetZaxis()->SetTitleFont(42);
   test1->SetHistogram(test1_stack_18);
   
   
   TH1D *resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295 = new TH1D("resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295","",20,0,1);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinContent(1,15.92532);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinContent(2,1177.63);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinContent(3,3136.655);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinContent(4,2799.165);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinContent(5,1690.931);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinContent(6,986.526);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinContent(7,589.975);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinContent(8,316.5025);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinContent(9,137.1054);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinContent(10,45.87757);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinContent(11,7.804461);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinContent(12,0.4218627);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinContent(13,0.1054657);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinError(1,1.329872);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinError(2,11.20917);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinError(3,18.25227);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinError(4,17.24066);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinError(5,13.39497);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinError(6,10.22201);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinError(7,7.899373);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinError(8,5.798695);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinError(9,3.817217);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinError(10,2.204712);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinError(11,0.9072501);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinError(12,0.2109314);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetBinError(13,0.1054657);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetEntries(104113);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetDirectory(0);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetFillColor(47);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetLineWidth(2);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc295->GetZaxis()->SetTitleFont(42);
   test1->Add(resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc,"");
   
   TH1D *resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296 = new TH1D("resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296","",20,0,1);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinContent(1,49.40952);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinContent(2,2582.334);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinContent(3,6178.592);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinContent(4,5216.994);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinContent(5,3242.843);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinContent(6,1995.939);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinContent(7,1225.802);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinContent(8,666.1708);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinContent(9,279.4726);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinContent(10,95.04471);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinContent(11,15.44048);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinContent(12,0.5146825);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinError(1,2.921576);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinError(2,21.1417);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinError(3,32.6552);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinError(4,29.98882);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinError(5,23.62811);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinError(6,18.5381);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinError(7,14.5382);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinError(8,10.7016);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinError(9,6.941327);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinError(10,4.059871);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinError(11,1.627569);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetBinError(12,0.2971521);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetEntries(126267);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetDirectory(0);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetFillColor(21);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetLineWidth(2);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc296->GetZaxis()->SetTitleFont(42);
   test1->Add(resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc,"");
   
   TH1D *resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297 = new TH1D("resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297","",20,0,1);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinContent(1,2.903156);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinContent(2,406.3973);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinContent(3,1856.091);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinContent(4,3181.352);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinContent(5,3856.798);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinContent(6,3827);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinContent(7,2954.761);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinContent(8,1676.395);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinContent(9,635.7994);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinContent(10,195.1);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinContent(11,41.34741);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinContent(12,6.34425);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinContent(13,0.1217971);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinError(1,0.5889714);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinError(2,7.440494);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinError(3,16.13072);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinError(4,21.20582);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinError(5,23.22307);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinError(6,22.98911);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinError(7,20.08429);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinError(8,15.0401);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinError(9,9.217926);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinError(10,5.138266);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinError(11,2.345803);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinError(12,0.922296);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetBinError(13,0.1217971);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetEntries(188628);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetDirectory(0);

   ci = TColor::GetColor("#cc3333");
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetFillColor(ci);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetLineWidth(2);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc297->GetZaxis()->SetTitleFont(42);
   test1->Add(resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc,"");
   
   TH1D *looseSel_Jet_2_tau_1hqcd298 = new TH1D("looseSel_Jet_2_tau_1hqcd298","",20,0,1);
   looseSel_Jet_2_tau_1hqcd298->SetBinContent(1,949.109);
   looseSel_Jet_2_tau_1hqcd298->SetBinContent(2,81057.43);
   looseSel_Jet_2_tau_1hqcd298->SetBinContent(3,255775.1);
   looseSel_Jet_2_tau_1hqcd298->SetBinContent(4,269168.2);
   looseSel_Jet_2_tau_1hqcd298->SetBinContent(5,195239.8);
   looseSel_Jet_2_tau_1hqcd298->SetBinContent(6,129430.1);
   looseSel_Jet_2_tau_1hqcd298->SetBinContent(7,82128.33);
   looseSel_Jet_2_tau_1hqcd298->SetBinContent(8,48109.73);
   looseSel_Jet_2_tau_1hqcd298->SetBinContent(9,24621.49);
   looseSel_Jet_2_tau_1hqcd298->SetBinContent(10,9506.889);
   looseSel_Jet_2_tau_1hqcd298->SetBinContent(11,1790.967);
   looseSel_Jet_2_tau_1hqcd298->SetBinContent(12,149.6239);
   looseSel_Jet_2_tau_1hqcd298->SetBinContent(13,10.74941);
   looseSel_Jet_2_tau_1hqcd298->SetBinError(1,19.97753);
   looseSel_Jet_2_tau_1hqcd298->SetBinError(2,342.3848);
   looseSel_Jet_2_tau_1hqcd298->SetBinError(3,752.8796);
   looseSel_Jet_2_tau_1hqcd298->SetBinError(4,995.5011);
   looseSel_Jet_2_tau_1hqcd298->SetBinError(5,945.6441);
   looseSel_Jet_2_tau_1hqcd298->SetBinError(6,869.0491);
   looseSel_Jet_2_tau_1hqcd298->SetBinError(7,825.5475);
   looseSel_Jet_2_tau_1hqcd298->SetBinError(8,555.7692);
   looseSel_Jet_2_tau_1hqcd298->SetBinError(9,602.3174);
   looseSel_Jet_2_tau_1hqcd298->SetBinError(10,447.3331);
   looseSel_Jet_2_tau_1hqcd298->SetBinError(11,272.971);
   looseSel_Jet_2_tau_1hqcd298->SetBinError(12,36.85147);
   looseSel_Jet_2_tau_1hqcd298->SetBinError(13,10.74941);
   looseSel_Jet_2_tau_1hqcd298->SetEntries(3841747);
   looseSel_Jet_2_tau_1hqcd298->SetDirectory(0);
   looseSel_Jet_2_tau_1hqcd298->SetFillColor(36);
   looseSel_Jet_2_tau_1hqcd298->SetLineWidth(2);
   looseSel_Jet_2_tau_1hqcd298->SetMarkerStyle(20);
   looseSel_Jet_2_tau_1hqcd298->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   looseSel_Jet_2_tau_1hqcd298->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hqcd298->GetXaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hqcd298->GetXaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hqcd298->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hqcd298->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_2_tau_1hqcd298->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hqcd298->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hqcd298->GetYaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hqcd298->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hqcd298->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hqcd298->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hqcd298->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hqcd298->GetZaxis()->SetTitleFont(42);
   test1->Add(looseSel_Jet_2_tau_1hqcd,"");
   test1->Draw("histsame");
   
   TH1D *resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299 = new TH1D("resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299","",20,0,1);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->SetBinContent(1,2981.278);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->SetBinContent(2,184982.7);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->SetBinContent(3,148901);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->SetBinContent(4,6826.249);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->SetBinContent(5,921.7107);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->SetBinContent(6,96.39132);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->SetBinError(1,276.3161);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->SetBinError(2,2179.711);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->SetBinError(3,1962.001);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->SetBinError(4,420.1009);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->SetBinError(5,158.256);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->SetBinError(6,48.53629);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->SetEntries(17066);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->SetDirectory(0);

   ci = TColor::GetColor("#990099");
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->SetLineColor(ci);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->SetLineWidth(2);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->GetZaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig299->Draw("HISTCSAME");
   
   TH1D *resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300 = new TH1D("resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300","",20,0,1);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinContent(1,5901.688);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinContent(2,209613);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinContent(3,113364.7);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinContent(4,10381.99);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinContent(5,2734.314);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinContent(6,1227.054);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinContent(7,687.0283);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinContent(8,424.0264);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinContent(9,258.8234);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinContent(10,76.67248);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinContent(11,40.02498);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinError(1,169.9441);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinError(2,1014.145);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinError(3,745.4884);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinError(4,225.0712);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinError(5,115.9231);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinError(6,77.66125);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinError(7,58.28174);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinError(8,45.83217);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinError(9,35.21351);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinError(10,18.57074);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetBinError(11,13.62037);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetEntries(82884);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetDirectory(0);

   ci = TColor::GetColor("#ff6600");
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetLineColor(ci);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetLineStyle(2);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetLineWidth(2);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->GetZaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig300->Draw("HISTCSAME");
   
   TH1D *resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301 = new TH1D("resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301","",20,0,1);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetBinContent(1,2228.122);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetBinContent(2,156770.3);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetBinContent(3,167691.1);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetBinContent(4,14914.36);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetBinContent(5,2115.423);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetBinContent(6,539.0219);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetBinContent(7,190.7726);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetBinContent(8,127.4269);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetBinContent(9,87.50612);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetBinContent(10,45.31575);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetBinError(1,245.7441);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetBinError(2,2028.312);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetBinError(3,2093.287);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetBinError(4,627.6002);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetBinError(5,234.9217);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetBinError(6,122.8234);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetBinError(7,65.10219);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetBinError(8,52.97837);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetBinError(9,50.56984);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetBinError(10,32.0865);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetEntries(15908);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetDirectory(0);

   ci = TColor::GetColor("#009900");
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetLineColor(ci);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetLineStyle(4);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetLineWidth(2);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->GetZaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig301->Draw("HISTCSAME");
   
   TH1D *looseSel_Jet_2_tau_1hqcd302 = new TH1D("looseSel_Jet_2_tau_1hqcd302","",20,0,1);
   looseSel_Jet_2_tau_1hqcd302->SetBinContent(1,1017.347);
   looseSel_Jet_2_tau_1hqcd302->SetBinContent(2,85223.79);
   looseSel_Jet_2_tau_1hqcd302->SetBinContent(3,266946.4);
   looseSel_Jet_2_tau_1hqcd302->SetBinContent(4,280365.7);
   looseSel_Jet_2_tau_1hqcd302->SetBinContent(5,204030.3);
   looseSel_Jet_2_tau_1hqcd302->SetBinContent(6,136239.6);
   looseSel_Jet_2_tau_1hqcd302->SetBinContent(7,86898.87);
   looseSel_Jet_2_tau_1hqcd302->SetBinContent(8,50768.79);
   looseSel_Jet_2_tau_1hqcd302->SetBinContent(9,25673.86);
   looseSel_Jet_2_tau_1hqcd302->SetBinContent(10,9842.911);
   looseSel_Jet_2_tau_1hqcd302->SetBinContent(11,1855.559);
   looseSel_Jet_2_tau_1hqcd302->SetBinContent(12,156.9047);
   looseSel_Jet_2_tau_1hqcd302->SetBinContent(13,10.97667);
   looseSel_Jet_2_tau_1hqcd302->SetBinError(1,20.24235);
   looseSel_Jet_2_tau_1hqcd302->SetBinError(2,343.3007);
   looseSel_Jet_2_tau_1hqcd302->SetBinError(3,753.981);
   looseSel_Jet_2_tau_1hqcd302->SetBinError(4,996.3276);
   looseSel_Jet_2_tau_1hqcd302->SetBinError(5,946.319);
   looseSel_Jet_2_tau_1hqcd302->SetBinError(6,869.6108);
   looseSel_Jet_2_tau_1hqcd302->SetBinError(7,825.9575);
   looseSel_Jet_2_tau_1hqcd302->SetBinError(8,556.1059);
   looseSel_Jet_2_tau_1hqcd302->SetBinError(9,602.44);
   looseSel_Jet_2_tau_1hqcd302->SetBinError(10,447.3865);
   looseSel_Jet_2_tau_1hqcd302->SetBinError(11,272.9874);
   looseSel_Jet_2_tau_1hqcd302->SetBinError(12,36.86481);
   looseSel_Jet_2_tau_1hqcd302->SetBinError(13,10.75061);
   looseSel_Jet_2_tau_1hqcd302->SetEntries(4260755);
   looseSel_Jet_2_tau_1hqcd302->SetDirectory(0);
   looseSel_Jet_2_tau_1hqcd302->SetFillColor(1);
   looseSel_Jet_2_tau_1hqcd302->SetFillStyle(3013);
   looseSel_Jet_2_tau_1hqcd302->SetLineWidth(2);
   looseSel_Jet_2_tau_1hqcd302->SetMarkerStyle(20);
   looseSel_Jet_2_tau_1hqcd302->SetMarkerSize(0);
   looseSel_Jet_2_tau_1hqcd302->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   looseSel_Jet_2_tau_1hqcd302->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hqcd302->GetXaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hqcd302->GetXaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hqcd302->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hqcd302->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_2_tau_1hqcd302->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hqcd302->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hqcd302->GetYaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hqcd302->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hqcd302->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hqcd302->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hqcd302->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hqcd302->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hqcd302->Draw("E2same");
   
   TH1D *looseSel_Jet_2_tau_1hherwig303 = new TH1D("looseSel_Jet_2_tau_1hherwig303","",20,0,1);
   looseSel_Jet_2_tau_1hherwig303->SetBinContent(1,1247.427);
   looseSel_Jet_2_tau_1hherwig303->SetBinContent(2,92792.64);
   looseSel_Jet_2_tau_1hherwig303->SetBinContent(3,273021.3);
   looseSel_Jet_2_tau_1hherwig303->SetBinContent(4,275979);
   looseSel_Jet_2_tau_1hherwig303->SetBinContent(5,203273.5);
   looseSel_Jet_2_tau_1hherwig303->SetBinContent(6,132013.7);
   looseSel_Jet_2_tau_1hherwig303->SetBinContent(7,85876.19);
   looseSel_Jet_2_tau_1hherwig303->SetBinContent(8,49454.32);
   looseSel_Jet_2_tau_1hherwig303->SetBinContent(9,25051.05);
   looseSel_Jet_2_tau_1hherwig303->SetBinContent(10,7846.723);
   looseSel_Jet_2_tau_1hherwig303->SetBinContent(11,2436.867);
   looseSel_Jet_2_tau_1hherwig303->SetBinContent(12,37.91203);
   looseSel_Jet_2_tau_1hherwig303->SetBinContent(13,0.2272628);
   looseSel_Jet_2_tau_1hherwig303->SetBinError(1,96.94657);
   looseSel_Jet_2_tau_1hherwig303->SetBinError(2,1076.202);
   looseSel_Jet_2_tau_1hherwig303->SetBinError(3,2085.376);
   looseSel_Jet_2_tau_1hherwig303->SetBinError(4,2375.459);
   looseSel_Jet_2_tau_1hherwig303->SetBinError(5,2290.551);
   looseSel_Jet_2_tau_1hherwig303->SetBinError(6,1779.165);
   looseSel_Jet_2_tau_1hherwig303->SetBinError(7,1633.39);
   looseSel_Jet_2_tau_1hherwig303->SetBinError(8,1550.892);
   looseSel_Jet_2_tau_1hherwig303->SetBinError(9,1667.091);
   looseSel_Jet_2_tau_1hherwig303->SetBinError(10,611.7801);
   looseSel_Jet_2_tau_1hherwig303->SetBinError(11,588.9087);
   looseSel_Jet_2_tau_1hherwig303->SetBinError(12,21.42407);
   looseSel_Jet_2_tau_1hherwig303->SetBinError(13,0.1611135);
   looseSel_Jet_2_tau_1hherwig303->SetEntries(709468);
   looseSel_Jet_2_tau_1hherwig303->SetDirectory(0);

   ci = 992;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   looseSel_Jet_2_tau_1hherwig303->SetFillColor(ci);
   looseSel_Jet_2_tau_1hherwig303->SetLineStyle(9);
   looseSel_Jet_2_tau_1hherwig303->SetLineWidth(2);
   looseSel_Jet_2_tau_1hherwig303->SetMarkerStyle(20);
   looseSel_Jet_2_tau_1hherwig303->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   looseSel_Jet_2_tau_1hherwig303->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hherwig303->GetXaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hherwig303->GetXaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hherwig303->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hherwig303->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_2_tau_1hherwig303->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hherwig303->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hherwig303->GetYaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hherwig303->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hherwig303->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hherwig303->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hherwig303->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hherwig303->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hherwig303->Draw("HIST same");
   
   TH1D *looseSel_Jet_2_tau_1hmg304 = new TH1D("looseSel_Jet_2_tau_1hmg304","",20,0,1);
   looseSel_Jet_2_tau_1hmg304->SetBinContent(1,1044.086);
   looseSel_Jet_2_tau_1hmg304->SetBinContent(2,79312.49);
   looseSel_Jet_2_tau_1hmg304->SetBinContent(3,258924);
   looseSel_Jet_2_tau_1hmg304->SetBinContent(4,289713.5);
   looseSel_Jet_2_tau_1hmg304->SetBinContent(5,214371.8);
   looseSel_Jet_2_tau_1hmg304->SetBinContent(6,140254.7);
   looseSel_Jet_2_tau_1hmg304->SetBinContent(7,86494.67);
   looseSel_Jet_2_tau_1hmg304->SetBinContent(8,47469.96);
   looseSel_Jet_2_tau_1hmg304->SetBinContent(9,22231.65);
   looseSel_Jet_2_tau_1hmg304->SetBinContent(10,7800.693);
   looseSel_Jet_2_tau_1hmg304->SetBinContent(11,1295.057);
   looseSel_Jet_2_tau_1hmg304->SetBinContent(12,117.9667);
   looseSel_Jet_2_tau_1hmg304->SetBinContent(13,0.4818356);
   looseSel_Jet_2_tau_1hmg304->SetBinError(1,17.30695);
   looseSel_Jet_2_tau_1hmg304->SetBinError(2,302.6701);
   looseSel_Jet_2_tau_1hmg304->SetBinError(3,618.9884);
   looseSel_Jet_2_tau_1hmg304->SetBinError(4,691.867);
   looseSel_Jet_2_tau_1hmg304->SetBinError(5,611.8699);
   looseSel_Jet_2_tau_1hmg304->SetBinError(6,505.7626);
   looseSel_Jet_2_tau_1hmg304->SetBinError(7,406.1006);
   looseSel_Jet_2_tau_1hmg304->SetBinError(8,307.6356);
   looseSel_Jet_2_tau_1hmg304->SetBinError(9,218.1755);
   looseSel_Jet_2_tau_1hmg304->SetBinError(10,132.9603);
   looseSel_Jet_2_tau_1hmg304->SetBinError(11,54.51649);
   looseSel_Jet_2_tau_1hmg304->SetBinError(12,16.77094);
   looseSel_Jet_2_tau_1hmg304->SetBinError(13,0.301272);
   looseSel_Jet_2_tau_1hmg304->SetEntries(1966122);
   looseSel_Jet_2_tau_1hmg304->SetDirectory(0);

   ci = 993;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   looseSel_Jet_2_tau_1hmg304->SetFillColor(ci);
   looseSel_Jet_2_tau_1hmg304->SetLineStyle(2);
   looseSel_Jet_2_tau_1hmg304->SetLineWidth(2);
   looseSel_Jet_2_tau_1hmg304->SetMarkerStyle(20);
   looseSel_Jet_2_tau_1hmg304->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   looseSel_Jet_2_tau_1hmg304->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hmg304->GetXaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hmg304->GetXaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hmg304->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hmg304->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_2_tau_1hmg304->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hmg304->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hmg304->GetYaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hmg304->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hmg304->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hmg304->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hmg304->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hmg304->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hmg304->Draw("HIST same");
   
   TH1D *looseSel_Jet_2_tau_1hdata305 = new TH1D("looseSel_Jet_2_tau_1hdata305","",20,0,1);
   looseSel_Jet_2_tau_1hdata305->SetBinContent(1,848);
   looseSel_Jet_2_tau_1hdata305->SetBinContent(2,86353);
   looseSel_Jet_2_tau_1hdata305->SetBinContent(3,270409);
   looseSel_Jet_2_tau_1hdata305->SetBinContent(4,284263);
   looseSel_Jet_2_tau_1hdata305->SetBinContent(5,203985);
   looseSel_Jet_2_tau_1hdata305->SetBinContent(6,135034);
   looseSel_Jet_2_tau_1hdata305->SetBinContent(7,85690);
   looseSel_Jet_2_tau_1hdata305->SetBinContent(8,48684);
   looseSel_Jet_2_tau_1hdata305->SetBinContent(9,23841);
   looseSel_Jet_2_tau_1hdata305->SetBinContent(10,8444);
   looseSel_Jet_2_tau_1hdata305->SetBinContent(11,1353);
   looseSel_Jet_2_tau_1hdata305->SetBinContent(12,122);
   looseSel_Jet_2_tau_1hdata305->SetBinContent(13,5);
   looseSel_Jet_2_tau_1hdata305->SetBinError(1,29.12044);
   looseSel_Jet_2_tau_1hdata305->SetBinError(2,293.8588);
   looseSel_Jet_2_tau_1hdata305->SetBinError(3,520.0087);
   looseSel_Jet_2_tau_1hdata305->SetBinError(4,533.1632);
   looseSel_Jet_2_tau_1hdata305->SetBinError(5,451.647);
   looseSel_Jet_2_tau_1hdata305->SetBinError(6,367.4697);
   looseSel_Jet_2_tau_1hdata305->SetBinError(7,292.7285);
   looseSel_Jet_2_tau_1hdata305->SetBinError(8,220.6445);
   looseSel_Jet_2_tau_1hdata305->SetBinError(9,154.4053);
   looseSel_Jet_2_tau_1hdata305->SetBinError(10,91.89124);
   looseSel_Jet_2_tau_1hdata305->SetBinError(11,36.78315);
   looseSel_Jet_2_tau_1hdata305->SetBinError(12,11.04536);
   looseSel_Jet_2_tau_1hdata305->SetBinError(13,2.236068);
   looseSel_Jet_2_tau_1hdata305->SetMinimum(0);
   looseSel_Jet_2_tau_1hdata305->SetMaximum(568526);
   looseSel_Jet_2_tau_1hdata305->SetEntries(1149031);
   looseSel_Jet_2_tau_1hdata305->SetDirectory(0);

   ci = TColor::GetColor("#ff9900");
   looseSel_Jet_2_tau_1hdata305->SetFillColor(ci);
   looseSel_Jet_2_tau_1hdata305->SetLineWidth(2);
   looseSel_Jet_2_tau_1hdata305->SetMarkerStyle(20);
   looseSel_Jet_2_tau_1hdata305->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   looseSel_Jet_2_tau_1hdata305->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hdata305->GetXaxis()->SetLabelSize(0);
   looseSel_Jet_2_tau_1hdata305->GetXaxis()->SetTitleSize(0);
   looseSel_Jet_2_tau_1hdata305->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hdata305->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_2_tau_1hdata305->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hdata305->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hdata305->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hdata305->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hdata305->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hdata305->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hdata305->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hdata305->Draw("EPSAME");
   
   TLegend *leg = new TLegend(0.6084422,0.4798951,0.9174874,0.8295455,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("looseSel_Jet_2_tau_1hdata","Data (2016)","LEP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("looseSel_Jet_2_tau_1hqcd","QCD Pythia8","F");
   entry->SetFillColor(36);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("looseSel_Jet_2_tau_1hherwig","         Herwig++","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(9);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("looseSel_Jet_2_tau_1hmg","         MadGraph+Pythia8","L");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc","t#bar{t}","F");
   entry->SetFillColor(47);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc","W+jets","F");
   entry->SetFillColor(21);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc","Z+jets","F");

   ci = TColor::GetColor("#cc3333");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig","W'(2 TeV)#rightarrowWZ","L");

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig","G_{Bulk}(2 TeV)#rightarrowWW","L");

   ci = TColor::GetColor("#ff6600");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig","G_{Bulk}(2 TeV)#rightarrowZZ","L");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(4);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.96,0.904,"35.9 fb^{-1}(13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.048);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1578,0.849655,"CMS");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(61);
   tex->SetTextSize(0.072);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.1578,0.763255,"Preliminary");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.05472);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1D *looseSel_Jet_2_tau_1hdata_copy306 = new TH1D("looseSel_Jet_2_tau_1hdata_copy306","",20,0,1);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinContent(1,848);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinContent(2,86353);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinContent(3,270409);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinContent(4,284263);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinContent(5,203985);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinContent(6,135034);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinContent(7,85690);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinContent(8,48684);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinContent(9,23841);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinContent(10,8444);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinContent(11,1353);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinContent(12,122);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinContent(13,5);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinError(1,29.12044);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinError(2,293.8588);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinError(3,520.0087);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinError(4,533.1632);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinError(5,451.647);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinError(6,367.4697);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinError(7,292.7285);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinError(8,220.6445);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinError(9,154.4053);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinError(10,91.89124);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinError(11,36.78315);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinError(12,11.04536);
   looseSel_Jet_2_tau_1hdata_copy306->SetBinError(13,2.236068);
   looseSel_Jet_2_tau_1hdata_copy306->SetMinimum(0);
   looseSel_Jet_2_tau_1hdata_copy306->SetMaximum(568526);
   looseSel_Jet_2_tau_1hdata_copy306->SetEntries(1149031);
   looseSel_Jet_2_tau_1hdata_copy306->SetDirectory(0);

   ci = TColor::GetColor("#ff9900");
   looseSel_Jet_2_tau_1hdata_copy306->SetFillColor(ci);
   looseSel_Jet_2_tau_1hdata_copy306->SetLineWidth(2);
   looseSel_Jet_2_tau_1hdata_copy306->SetMarkerStyle(20);
   looseSel_Jet_2_tau_1hdata_copy306->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   looseSel_Jet_2_tau_1hdata_copy306->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hdata_copy306->GetXaxis()->SetLabelSize(0);
   looseSel_Jet_2_tau_1hdata_copy306->GetXaxis()->SetTitleSize(0);
   looseSel_Jet_2_tau_1hdata_copy306->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hdata_copy306->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_2_tau_1hdata_copy306->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hdata_copy306->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hdata_copy306->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hdata_copy306->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hdata_copy306->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hdata_copy306->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hdata_copy306->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hdata_copy306->Draw("sameaxis");
   c1_2->Modified();
   looseSel_Jet_2_tau_1->cd();
   looseSel_Jet_2_tau_1->Modified();
   looseSel_Jet_2_tau_1->cd();
   looseSel_Jet_2_tau_1->SetSelected(looseSel_Jet_2_tau_1);
}
