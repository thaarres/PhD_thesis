void looseSel_Jet_2_tau_1()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Sep  5 11:27:08 2018) by ROOT version6.02/05
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.16);
   c1->SetRightMargin(0.02);
   c1->SetTopMargin(0.05);
   c1->SetBottomMargin(0.13);
   c1->SetFrameFillStyle(0);
   c1->SetFrameBorderMode(0);
  
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
   
   TH1D *ratiohist5452273 = new TH1D("ratiohist5452273","",20,0,1);
   ratiohist5452273->SetBinContent(1,0.8658906);
   ratiohist5452273->SetBinContent(2,0.9508747);
   ratiohist5452273->SetBinContent(3,0.9714796);
   ratiohist5452273->SetBinContent(4,1.013931);
   ratiohist5452273->SetBinContent(5,1.020741);
   ratiohist5452273->SetBinContent(6,1.010807);
   ratiohist5452273->SetBinContent(7,1.020761);
   ratiohist5452273->SetBinContent(8,1.019395);
   ratiohist5452273->SetBinContent(9,1.015911);
   ratiohist5452273->SetBinContent(10,1.006944);
   ratiohist5452273->SetBinContent(11,0.9283698);
   ratiohist5452273->SetBinContent(12,1.140957);
   ratiohist5452273->SetBinContent(13,0.6256543);
   ratiohist5452273->SetBinError(1,0.02273149);
   ratiohist5452273->SetBinError(2,0.003480243);
   ratiohist5452273->SetBinError(3,0.005955396);
   ratiohist5452273->SetBinError(4,0.002821418);
   ratiohist5452273->SetBinError(5,0.003691629);
   ratiohist5452273->SetBinError(6,0.009431793);
   ratiohist5452273->SetBinError(7,0.006867043);
   ratiohist5452273->SetBinError(8,0.009580543);
   ratiohist5452273->SetBinError(9,0.0168845);
   ratiohist5452273->SetBinError(10,0.02992055);
   ratiohist5452273->SetBinError(11,0.08269514);
   ratiohist5452273->SetBinError(12,0.2393881);
   ratiohist5452273->SetBinError(13,0.5750114);
   ratiohist5452273->SetMinimum(0.2);
   ratiohist5452273->SetMaximum(1.8);
   ratiohist5452273->SetEntries(399.5976);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff9900");
   ratiohist5452273->SetFillColor(ci);
   ratiohist5452273->SetLineWidth(2);
   ratiohist5452273->SetMarkerStyle(20);
   ratiohist5452273->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   ratiohist5452273->GetXaxis()->SetNdivisions(505);
   ratiohist5452273->GetXaxis()->SetLabelFont(42);
   ratiohist5452273->GetXaxis()->SetLabelSize(0.14);
   ratiohist5452273->GetXaxis()->SetTitleSize(0.17);
   ratiohist5452273->GetXaxis()->SetTitleOffset(0.98);
   ratiohist5452273->GetXaxis()->SetTitleFont(42);
   ratiohist5452273->GetYaxis()->SetTitle("Data/MC");
   ratiohist5452273->GetYaxis()->CenterTitle(true);
   ratiohist5452273->GetYaxis()->SetNdivisions(105);
   ratiohist5452273->GetYaxis()->SetLabelFont(42);
   ratiohist5452273->GetYaxis()->SetLabelSize(0.14);
   ratiohist5452273->GetYaxis()->SetTitleSize(0.16);
   ratiohist5452273->GetYaxis()->SetTitleOffset(0.2);
   ratiohist5452273->GetYaxis()->SetTitleFont(42);
   ratiohist5452273->GetZaxis()->SetLabelFont(42);
   ratiohist5452273->GetZaxis()->SetLabelSize(0.035);
   ratiohist5452273->GetZaxis()->SetTitleSize(0.035);
   ratiohist5452273->GetZaxis()->SetTitleFont(42);
   ratiohist5452273->Draw("");
   
   Double_t Graph0_fx1017[21] = {
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
   Double_t Graph0_fy1017[21] = {
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
   Double_t Graph0_fex1017[21] = {
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
   Double_t Graph0_fey1017[21] = {
   0.0139417,
   0.0139417,
   0.002830064,
   0.005990276,
   0.002476365,
   0.003291761,
   0.009146907,
   0.006313411,
   0.008879535,
   0.01602175,
   0.02877673,
   0.0872966,
   0.20025,
   0.8483303,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(21,Graph0_fx1017,Graph0_fy1017,Graph0_fex1017,Graph0_fey1017);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(3013);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1017 = new TH1F("Graph_Graph1017","Graph",100,-0.1575,1.1325);
   Graph_Graph1017->SetMinimum(0);
   Graph_Graph1017->SetMaximum(2.017996);
   Graph_Graph1017->SetDirectory(0);
   Graph_Graph1017->SetStats(0);
   Graph_Graph1017->SetLineStyle(0);
   Graph_Graph1017->SetMarkerStyle(20);
   Graph_Graph1017->GetXaxis()->SetLabelFont(42);
   Graph_Graph1017->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph1017->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1017->GetXaxis()->SetTitleFont(42);
   Graph_Graph1017->GetYaxis()->SetLabelFont(42);
   Graph_Graph1017->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph1017->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1017->GetYaxis()->SetTitleFont(42);
   Graph_Graph1017->GetZaxis()->SetLabelFont(42);
   Graph_Graph1017->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph1017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1017);
   
   gre->Draw("3");
   
   TH1D *H_ratiohist9375274 = new TH1D("H_ratiohist9375274","",20,0,1);
   H_ratiohist9375274->SetBinContent(1,0.8568988);
   H_ratiohist9375274->SetBinContent(2,0.9421039);
   H_ratiohist9375274->SetBinContent(3,0.99002);
   H_ratiohist9375274->SetBinContent(4,1.020306);
   H_ratiohist9375274->SetBinContent(5,1.015469);
   H_ratiohist9375274->SetBinContent(6,1.008933);
   H_ratiohist9375274->SetBinContent(7,0.9922924);
   H_ratiohist9375274->SetBinContent(8,0.9789938);
   H_ratiohist9375274->SetBinContent(9,0.9947657);
   H_ratiohist9375274->SetBinContent(10,1.02669);
   H_ratiohist9375274->SetBinContent(11,0.8135088);
   H_ratiohist9375274->SetBinContent(12,2.74822);
   H_ratiohist9375274->SetBinContent(13,16.35524);
   H_ratiohist9375274->SetBinError(1,0.04895267);
   H_ratiohist9375274->SetBinError(2,0.009145876);
   H_ratiohist9375274->SetBinError(3,0.006006433);
   H_ratiohist9375274->SetBinError(4,0.006631518);
   H_ratiohist9375274->SetBinError(5,0.008304327);
   H_ratiohist9375274->SetBinError(6,0.01051481);
   H_ratiohist9375274->SetBinError(7,0.01383769);
   H_ratiohist9375274->SetBinError(8,0.0208115);
   H_ratiohist9375274->SetBinError(9,0.03889407);
   H_ratiohist9375274->SetBinError(10,0.08977307);
   H_ratiohist9375274->SetBinError(11,0.1376945);
   H_ratiohist9375274->SetBinError(12,1.172357);
   H_ratiohist9375274->SetBinError(13,10.04948);
   H_ratiohist9375274->SetMinimum(0);
   H_ratiohist9375274->SetMaximum(1176381);
   H_ratiohist9375274->SetEntries(8.639508);

   ci = 990;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   H_ratiohist9375274->SetFillColor(ci);
   H_ratiohist9375274->SetLineStyle(9);
   H_ratiohist9375274->SetLineWidth(2);
   H_ratiohist9375274->SetMarkerStyle(20);
   H_ratiohist9375274->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   H_ratiohist9375274->GetXaxis()->SetLabelFont(42);
   H_ratiohist9375274->GetXaxis()->SetLabelSize(0);
   H_ratiohist9375274->GetXaxis()->SetTitleSize(0);
   H_ratiohist9375274->GetXaxis()->SetTitleFont(42);
   H_ratiohist9375274->GetYaxis()->SetTitle("Events");
   H_ratiohist9375274->GetYaxis()->SetLabelFont(42);
   H_ratiohist9375274->GetYaxis()->SetLabelSize(0.035);
   H_ratiohist9375274->GetYaxis()->SetTitleFont(42);
   H_ratiohist9375274->GetZaxis()->SetLabelFont(42);
   H_ratiohist9375274->GetZaxis()->SetLabelSize(0.035);
   H_ratiohist9375274->GetZaxis()->SetTitleSize(0.035);
   H_ratiohist9375274->GetZaxis()->SetTitleFont(42);
   H_ratiohist9375274->Draw("HISTsame");
   
   TH1D *MG_ratiohist365275 = new TH1D("MG_ratiohist365275","",20,0,1);
   MG_ratiohist365275->SetBinContent(1,0.9849583);
   MG_ratiohist365275->SetBinContent(2,1.08909);
   MG_ratiohist365275->SetBinContent(3,0.9874913);
   MG_ratiohist365275->SetBinContent(4,0.9862711);
   MG_ratiohist365275->SetBinContent(5,1.007868);
   MG_ratiohist365275->SetBinContent(6,0.8862928);
   MG_ratiohist365275->SetBinContent(7,1.064314);
   MG_ratiohist365275->SetBinContent(8,1.12119);
   MG_ratiohist365275->SetBinContent(9,1.187906);
   MG_ratiohist365275->SetBinContent(10,1.252541);
   MG_ratiohist365275->SetBinContent(11,1.322092);
   MG_ratiohist365275->SetBinContent(12,1.234641);
   MG_ratiohist365275->SetBinContent(13,2.655111);
   MG_ratiohist365275->SetBinError(1,0.02521134);
   MG_ratiohist365275->SetBinError(2,0.004046924);
   MG_ratiohist365275->SetBinError(3,0.03167042);
   MG_ratiohist365275->SetBinError(4,0.02970488);
   MG_ratiohist365275->SetBinError(5,0.002663927);
   MG_ratiohist365275->SetBinError(6,0.05377071);
   MG_ratiohist365275->SetBinError(7,0.004567672);
   MG_ratiohist365275->SetBinError(8,0.006604596);
   MG_ratiohist365275->SetBinError(9,0.01049003);
   MG_ratiohist365275->SetBinError(10,0.01934874);
   MG_ratiohist365275->SetBinError(11,0.051574);
   MG_ratiohist365275->SetBinError(12,0.1597408);
   MG_ratiohist365275->SetBinError(13,2.231019);
   MG_ratiohist365275->SetMinimum(0);
   MG_ratiohist365275->SetMaximum(1176381);
   MG_ratiohist365275->SetEntries(49.68487);

   ci = 991;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   MG_ratiohist365275->SetFillColor(ci);
   MG_ratiohist365275->SetLineStyle(2);
   MG_ratiohist365275->SetLineWidth(2);
   MG_ratiohist365275->SetMarkerStyle(20);
   MG_ratiohist365275->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   MG_ratiohist365275->GetXaxis()->SetLabelFont(42);
   MG_ratiohist365275->GetXaxis()->SetLabelSize(0);
   MG_ratiohist365275->GetXaxis()->SetTitleSize(0);
   MG_ratiohist365275->GetXaxis()->SetTitleFont(42);
   MG_ratiohist365275->GetYaxis()->SetTitle("Events");
   MG_ratiohist365275->GetYaxis()->SetLabelFont(42);
   MG_ratiohist365275->GetYaxis()->SetLabelSize(0.035);
   MG_ratiohist365275->GetYaxis()->SetTitleFont(42);
   MG_ratiohist365275->GetZaxis()->SetLabelFont(42);
   MG_ratiohist365275->GetZaxis()->SetLabelSize(0.035);
   MG_ratiohist365275->GetZaxis()->SetTitleSize(0.035);
   MG_ratiohist365275->GetZaxis()->SetTitleFont(42);
   MG_ratiohist365275->Draw("HISTsame");
   
   TH1D *ratiohist5452276 = new TH1D("ratiohist5452276","",20,0,1);
   ratiohist5452276->SetBinContent(1,0.8658906);
   ratiohist5452276->SetBinContent(2,0.9508747);
   ratiohist5452276->SetBinContent(3,0.9714796);
   ratiohist5452276->SetBinContent(4,1.013931);
   ratiohist5452276->SetBinContent(5,1.020741);
   ratiohist5452276->SetBinContent(6,1.010807);
   ratiohist5452276->SetBinContent(7,1.020761);
   ratiohist5452276->SetBinContent(8,1.019395);
   ratiohist5452276->SetBinContent(9,1.015911);
   ratiohist5452276->SetBinContent(10,1.006944);
   ratiohist5452276->SetBinContent(11,0.9283698);
   ratiohist5452276->SetBinContent(12,1.140957);
   ratiohist5452276->SetBinContent(13,0.6256543);
   ratiohist5452276->SetBinError(1,0.02273149);
   ratiohist5452276->SetBinError(2,0.003480243);
   ratiohist5452276->SetBinError(3,0.005955396);
   ratiohist5452276->SetBinError(4,0.002821418);
   ratiohist5452276->SetBinError(5,0.003691629);
   ratiohist5452276->SetBinError(6,0.009431793);
   ratiohist5452276->SetBinError(7,0.006867043);
   ratiohist5452276->SetBinError(8,0.009580543);
   ratiohist5452276->SetBinError(9,0.0168845);
   ratiohist5452276->SetBinError(10,0.02992055);
   ratiohist5452276->SetBinError(11,0.08269514);
   ratiohist5452276->SetBinError(12,0.2393881);
   ratiohist5452276->SetBinError(13,0.5750114);
   ratiohist5452276->SetMinimum(0.2);
   ratiohist5452276->SetMaximum(1.8);
   ratiohist5452276->SetEntries(399.5976);

   ci = TColor::GetColor("#ff9900");
   ratiohist5452276->SetFillColor(ci);
   ratiohist5452276->SetLineWidth(2);
   ratiohist5452276->SetMarkerStyle(20);
   ratiohist5452276->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   ratiohist5452276->GetXaxis()->SetNdivisions(505);
   ratiohist5452276->GetXaxis()->SetLabelFont(42);
   ratiohist5452276->GetXaxis()->SetLabelSize(0.14);
   ratiohist5452276->GetXaxis()->SetTitleSize(0.17);
   ratiohist5452276->GetXaxis()->SetTitleOffset(0.98);
   ratiohist5452276->GetXaxis()->SetTitleFont(42);
   ratiohist5452276->GetYaxis()->SetTitle("Data/MC");
   ratiohist5452276->GetYaxis()->CenterTitle(true);
   ratiohist5452276->GetYaxis()->SetNdivisions(105);
   ratiohist5452276->GetYaxis()->SetLabelFont(42);
   ratiohist5452276->GetYaxis()->SetLabelSize(0.14);
   ratiohist5452276->GetYaxis()->SetTitleSize(0.16);
   ratiohist5452276->GetYaxis()->SetTitleOffset(0.2);
   ratiohist5452276->GetYaxis()->SetTitleFont(42);
   ratiohist5452276->GetZaxis()->SetLabelFont(42);
   ratiohist5452276->GetZaxis()->SetLabelSize(0.035);
   ratiohist5452276->GetZaxis()->SetTitleSize(0.035);
   ratiohist5452276->GetZaxis()->SetTitleFont(42);
   ratiohist5452276->Draw("same");
   c1_1->Modified();
   c1->cd();
  
// ------------>Primitives in pad: c1_2
   TPad *c1_2 = new TPad("c1_2", "newpad2",0,0.2,1,1);
   c1_2->Draw();
   c1_2->cd();
   c1_2->Range(-0.1428571,-17638.93,1.047619,1339202);
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
   
   TH1D *looseSel_Jet_2_tau_1hdata277 = new TH1D("looseSel_Jet_2_tau_1hdata277","",20,0,1);
   looseSel_Jet_2_tau_1hdata277->SetBinContent(1,2021);
   looseSel_Jet_2_tau_1hdata277->SetBinContent(2,185644);
   looseSel_Jet_2_tau_1hdata277->SetBinContent(3,589500);
   looseSel_Jet_2_tau_1hdata277->SetBinContent(4,620821);
   looseSel_Jet_2_tau_1hdata277->SetBinContent(5,445586);
   looseSel_Jet_2_tau_1hdata277->SetBinContent(6,294047);
   looseSel_Jet_2_tau_1hdata277->SetBinContent(7,185238);
   looseSel_Jet_2_tau_1hdata277->SetBinContent(8,105472);
   looseSel_Jet_2_tau_1hdata277->SetBinContent(9,51203);
   looseSel_Jet_2_tau_1hdata277->SetBinContent(10,18237);
   looseSel_Jet_2_tau_1hdata277->SetBinContent(11,3187);
   looseSel_Jet_2_tau_1hdata277->SetBinContent(12,255);
   looseSel_Jet_2_tau_1hdata277->SetBinContent(13,8);
   looseSel_Jet_2_tau_1hdata277->SetBinError(1,44.95553);
   looseSel_Jet_2_tau_1hdata277->SetBinError(2,430.8642);
   looseSel_Jet_2_tau_1hdata277->SetBinError(3,767.789);
   looseSel_Jet_2_tau_1hdata277->SetBinError(4,787.922);
   looseSel_Jet_2_tau_1hdata277->SetBinError(5,667.5223);
   looseSel_Jet_2_tau_1hdata277->SetBinError(6,542.261);
   looseSel_Jet_2_tau_1hdata277->SetBinError(7,430.3928);
   looseSel_Jet_2_tau_1hdata277->SetBinError(8,324.7645);
   looseSel_Jet_2_tau_1hdata277->SetBinError(9,226.2808);
   looseSel_Jet_2_tau_1hdata277->SetBinError(10,135.0444);
   looseSel_Jet_2_tau_1hdata277->SetBinError(11,56.45352);
   looseSel_Jet_2_tau_1hdata277->SetBinError(12,15.96872);
   looseSel_Jet_2_tau_1hdata277->SetBinError(13,2.828427);
   looseSel_Jet_2_tau_1hdata277->SetMinimum(0);
   looseSel_Jet_2_tau_1hdata277->SetMaximum(1176381);
   looseSel_Jet_2_tau_1hdata277->SetEntries(2501219);

   ci = TColor::GetColor("#ff9900");
   looseSel_Jet_2_tau_1hdata277->SetFillColor(ci);
   looseSel_Jet_2_tau_1hdata277->SetLineWidth(2);
   looseSel_Jet_2_tau_1hdata277->SetMarkerStyle(20);
   looseSel_Jet_2_tau_1hdata277->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   looseSel_Jet_2_tau_1hdata277->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hdata277->GetXaxis()->SetLabelSize(0);
   looseSel_Jet_2_tau_1hdata277->GetXaxis()->SetTitleSize(0);
   looseSel_Jet_2_tau_1hdata277->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hdata277->GetYaxis()->SetTitle("Events");
   looseSel_Jet_2_tau_1hdata277->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hdata277->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hdata277->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hdata277->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hdata277->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hdata277->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hdata277->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hdata277->Draw("EP");
   
   THStack *stack = new THStack();
   stack->SetName("stack");
   stack->SetTitle("ctack");
   
   TH1F *stack_stack_17 = new TH1F("stack_stack_17","ctack",20,0,1);
   stack_stack_17->SetMinimum(0);
   stack_stack_17->SetMaximum(642905.5);
   stack_stack_17->SetDirectory(0);
   stack_stack_17->SetStats(0);
   stack_stack_17->SetLineStyle(0);
   stack_stack_17->SetMarkerStyle(20);
   stack_stack_17->GetXaxis()->SetLabelFont(42);
   stack_stack_17->GetXaxis()->SetLabelOffset(0.007);
   stack_stack_17->GetXaxis()->SetTitleOffset(1.1);
   stack_stack_17->GetXaxis()->SetTitleFont(42);
   stack_stack_17->GetYaxis()->SetLabelFont(42);
   stack_stack_17->GetYaxis()->SetLabelOffset(0.007);
   stack_stack_17->GetYaxis()->SetTitleOffset(1.25);
   stack_stack_17->GetYaxis()->SetTitleFont(42);
   stack_stack_17->GetZaxis()->SetLabelFont(42);
   stack_stack_17->GetZaxis()->SetLabelOffset(0.007);
   stack_stack_17->GetZaxis()->SetTitleFont(42);
   stack->SetHistogram(stack_stack_17);
   
   
   TH1D *resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278 = new TH1D("resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278","",20,0,1);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->SetBinContent(1,6.248492);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->SetBinContent(2,874.6929);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->SetBinContent(3,3994.884);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->SetBinContent(4,6847.256);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->SetBinContent(5,8301.024);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->SetBinContent(6,8236.891);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->SetBinContent(7,6359.561);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->SetBinContent(8,3608.121);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->SetBinContent(9,1368.437);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->SetBinContent(10,419.9158);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->SetBinContent(11,88.99245);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->SetBinContent(12,13.65479);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->SetBinContent(13,0.2621452);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->SetBinError(1,0.8986049);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->SetBinError(2,11.3521);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->SetBinError(3,24.61095);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->SetBinError(4,32.35412);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->SetBinError(5,35.43188);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->SetBinError(6,35.07492);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->SetBinError(7,30.64298);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->SetBinError(8,22.94697);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->SetBinError(9,14.06396);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->SetBinError(10,7.83955);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->SetBinError(11,3.579036);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->SetBinError(12,1.407164);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->SetBinError(13,0.1858282);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->SetEntries(377256);

   ci = TColor::GetColor("#cc3333");
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->SetFillColor(ci);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->SetLineWidth(2);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc278->GetZaxis()->SetTitleFont(42);
   stack->Add(resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc,"");
   
   TH1D *resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279 = new TH1D("resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279","",20,0,1);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->SetBinContent(1,34.27622);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->SetBinContent(2,2534.624);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->SetBinContent(3,6751.054);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->SetBinContent(4,6024.67);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->SetBinContent(5,3639.408);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->SetBinContent(6,2123.31);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->SetBinContent(7,1269.809);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->SetBinContent(8,681.2115);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->SetBinContent(9,295.0933);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->SetBinContent(10,98.74276);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->SetBinContent(11,16.79762);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->SetBinContent(12,0.9079794);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->SetBinContent(13,0.2269948);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->SetBinError(1,2.02901);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->SetBinError(2,17.10205);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->SetBinError(3,27.84783);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->SetBinError(4,26.3044);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->SetBinError(5,20.43696);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->SetBinError(6,15.59592);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->SetBinError(7,12.05222);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->SetBinError(8,8.847179);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->SetBinError(9,5.824);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->SetBinError(10,3.363771);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->SetBinError(11,1.384209);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->SetBinError(12,0.321822);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->SetBinError(13,0.160911);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->SetEntries(208226);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->SetFillColor(47);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->SetLineWidth(2);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc279->GetZaxis()->SetTitleFont(42);
   stack->Add(resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc,"");
   
   TH1D *resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280 = new TH1D("resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280","",20,0,1);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->SetBinContent(1,106.3446);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->SetBinContent(2,5557.983);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->SetBinContent(3,13298.25);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->SetBinContent(4,11228.59);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->SetBinContent(5,6979.604);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->SetBinContent(6,4295.879);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->SetBinContent(7,2638.306);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->SetBinContent(8,1433.806);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->SetBinContent(9,601.5117);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->SetBinContent(10,204.5657);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->SetBinContent(11,33.23269);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->SetBinContent(12,1.107756);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->SetBinError(1,4.457504);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->SetBinError(2,32.25629);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->SetBinError(3,49.82266);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->SetBinError(4,45.75451);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->SetBinError(5,36.04985);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->SetBinError(6,28.28393);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->SetBinError(7,22.18121);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->SetBinError(8,16.32764);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->SetBinError(9,10.59051);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->SetBinError(10,6.194222);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->SetBinError(11,2.483213);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->SetBinError(12,0.4533706);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->SetEntries(252534);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->SetFillColor(21);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->SetLineWidth(2);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc280->GetZaxis()->SetTitleFont(42);
   stack->Add(resCP16_latest/controlplots_2017_WJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc,"");
   
   TH1D *looseSel_Jet_2_tau_1hqcd281 = new TH1D("looseSel_Jet_2_tau_1hqcd281","",20,0,1);
   looseSel_Jet_2_tau_1hqcd281->SetBinContent(1,2187.144);
   looseSel_Jet_2_tau_1hqcd281->SetBinContent(2,186267.7);
   looseSel_Jet_2_tau_1hqcd281->SetBinContent(3,582762.2);
   looseSel_Jet_2_tau_1hqcd281->SetBinContent(4,588190.5);
   looseSel_Jet_2_tau_1hqcd281->SetBinContent(5,417612.1);
   looseSel_Jet_2_tau_1hqcd281->SetBinContent(6,276247.2);
   looseSel_Jet_2_tau_1hqcd281->SetBinContent(7,171202.9);
   looseSel_Jet_2_tau_1hqcd281->SetBinContent(8,97742.14);
   looseSel_Jet_2_tau_1hqcd281->SetBinContent(9,48136.05);
   looseSel_Jet_2_tau_1hqcd281->SetBinContent(10,17388);
   looseSel_Jet_2_tau_1hqcd281->SetBinContent(11,3293.877);
   looseSel_Jet_2_tau_1hqcd281->SetBinContent(12,207.826);
   looseSel_Jet_2_tau_1hqcd281->SetBinContent(13,12.29747);
   looseSel_Jet_2_tau_1hqcd281->SetBinError(1,32.15687);
   looseSel_Jet_2_tau_1hqcd281->SetBinError(2,551.2031);
   looseSel_Jet_2_tau_1hqcd281->SetBinError(3,3634.406);
   looseSel_Jet_2_tau_1hqcd281->SetBinError(4,1514.992);
   looseSel_Jet_2_tau_1hqcd281->SetBinError(5,1435.925);
   looseSel_Jet_2_tau_1hqcd281->SetBinError(6,2660.438);
   looseSel_Jet_2_tau_1hqcd281->SetBinError(7,1145.01);
   looseSel_Jet_2_tau_1hqcd281->SetBinError(8,918.2492);
   looseSel_Jet_2_tau_1hqcd281->SetBinError(9,807.3007);
   looseSel_Jet_2_tau_1hqcd281->SetBinError(10,521.0752);
   looseSel_Jet_2_tau_1hqcd281->SetBinError(11,299.6456);
   looseSel_Jet_2_tau_1hqcd281->SetBinError(12,44.7296);
   looseSel_Jet_2_tau_1hqcd281->SetBinError(13,10.84449);
   looseSel_Jet_2_tau_1hqcd281->SetEntries(9443600);
   looseSel_Jet_2_tau_1hqcd281->SetFillColor(36);
   looseSel_Jet_2_tau_1hqcd281->SetLineWidth(2);
   looseSel_Jet_2_tau_1hqcd281->SetMarkerStyle(20);
   looseSel_Jet_2_tau_1hqcd281->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   looseSel_Jet_2_tau_1hqcd281->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hqcd281->GetXaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hqcd281->GetXaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hqcd281->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hqcd281->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_2_tau_1hqcd281->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hqcd281->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hqcd281->GetYaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hqcd281->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hqcd281->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hqcd281->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hqcd281->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hqcd281->GetZaxis()->SetTitleFont(42);
   stack->Add(looseSel_Jet_2_tau_1hqcd,"");
   stack->Draw("histsame");
   
   TH1D *resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282 = new TH1D("resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282","",20,0,1);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->SetBinContent(1,8992.786);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->SetBinContent(2,319400.9);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->SetBinContent(3,172741.2);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->SetBinContent(4,15819.72);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->SetBinContent(5,4166.453);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->SetBinContent(6,1869.742);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->SetBinContent(7,1046.87);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->SetBinContent(8,646.1166);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->SetBinContent(9,394.3861);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->SetBinContent(10,116.8309);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->SetBinContent(11,60.98867);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->SetBinError(1,183.7117);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->SetBinError(2,1096.303);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->SetBinError(3,805.8825);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->SetBinError(4,243.3048);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->SetBinError(5,125.3144);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->SetBinError(6,83.95281);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->SetBinError(7,63.00331);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->SetBinError(8,49.54517);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->SetBinError(9,38.06626);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->SetBinError(10,20.07521);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->SetBinError(11,14.72379);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->SetEntries(165768);

   ci = TColor::GetColor("#ff6600");
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->SetLineColor(ci);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->SetLineStyle(2);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->SetLineWidth(2);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->GetZaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig282->Draw("HISTCSAME");
   
   TH1D *resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig283 = new TH1D("resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig283","",20,0,1);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig283->SetBinContent(1,4542.767);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig283->SetBinContent(2,281870.1);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig283->SetBinContent(3,226890.2);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig283->SetBinContent(4,10401.6);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig283->SetBinContent(5,1404.471);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig283->SetBinContent(6,146.8777);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig283->SetBinError(1,298.7013);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig283->SetBinError(2,2356.296);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig283->SetBinError(3,2120.949);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig283->SetBinError(4,454.1345);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig283->SetBinError(5,171.0768);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig283->SetBinError(6,52.46836);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig283->SetEntries(34132);

   ci = TColor::GetColor("#990099");
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig283->SetLineColor(ci);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig283->SetLineWidth(2);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig283->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig283->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig283->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig283->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig283->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig283->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig283->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig283->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig283->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig283->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig283->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig283->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig283->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig283->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig283->GetZaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig283->Draw("HISTCSAME");
   
   TH1D *resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284 = new TH1D("resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284","",20,0,1);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284->SetBinContent(1,3395.134);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284->SetBinContent(2,238881.1);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284->SetBinContent(3,255521.8);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284->SetBinContent(4,22725.99);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284->SetBinContent(5,3223.407);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284->SetBinContent(6,821.3428);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284->SetBinContent(7,290.6927);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284->SetBinContent(8,194.1687);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284->SetBinContent(9,133.3388);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284->SetBinContent(10,69.05056);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284->SetBinError(1,265.6525);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284->SetBinError(2,2192.631);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284->SetBinError(3,2262.871);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284->SetBinError(4,678.4439);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284->SetBinError(5,253.9534);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284->SetBinError(6,132.7737);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284->SetBinError(7,70.37631);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284->SetBinError(8,57.2703);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284->SetBinError(9,54.66665);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284->SetBinError(10,34.68592);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284->SetEntries(31816);

   ci = TColor::GetColor("#009900");
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284->SetLineColor(ci);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284->SetLineStyle(4);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284->SetLineWidth(2);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284->SetMarkerStyle(20);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284->GetXaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284->GetXaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284->GetXaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284->GetXaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284->GetYaxis()->SetTitle("Events / 0.05");
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284->GetYaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284->GetYaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284->GetYaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284->GetYaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284->GetZaxis()->SetLabelFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284->GetZaxis()->SetLabelSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284->GetZaxis()->SetTitleSize(0.035);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284->GetZaxis()->SetTitleFont(42);
   resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig284->Draw("HISTCSAME");
   
   TH1D *looseSel_Jet_2_tau_1hherwig285 = new TH1D("looseSel_Jet_2_tau_1hherwig285","",20,0,1);
   looseSel_Jet_2_tau_1hherwig285->SetBinContent(1,2358.505);
   looseSel_Jet_2_tau_1hherwig285->SetBinContent(2,197052.6);
   looseSel_Jet_2_tau_1hherwig285->SetBinContent(3,595442.5);
   looseSel_Jet_2_tau_1hherwig285->SetBinContent(4,608465.3);
   looseSel_Jet_2_tau_1hherwig285->SetBinContent(5,438798.3);
   looseSel_Jet_2_tau_1hherwig285->SetBinContent(6,291443.6);
   looseSel_Jet_2_tau_1hherwig285->SetBinContent(7,186676.8);
   looseSel_Jet_2_tau_1hherwig285->SetBinContent(8,107735.1);
   looseSel_Jet_2_tau_1hherwig285->SetBinContent(9,51472.42);
   looseSel_Jet_2_tau_1hherwig285->SetBinContent(10,17762.91);
   looseSel_Jet_2_tau_1hherwig285->SetBinContent(11,3917.597);
   looseSel_Jet_2_tau_1hherwig285->SetBinContent(12,92.78734);
   looseSel_Jet_2_tau_1hherwig285->SetBinContent(13,0.48914);
   looseSel_Jet_2_tau_1hherwig285->SetBinError(1,124.1024);
   looseSel_Jet_2_tau_1hherwig285->SetBinError(2,1857.498);
   looseSel_Jet_2_tau_1hherwig285->SetBinError(3,3528.313);
   looseSel_Jet_2_tau_1hherwig285->SetBinError(4,3878.612);
   looseSel_Jet_2_tau_1hherwig285->SetBinError(5,3527.694);
   looseSel_Jet_2_tau_1hherwig285->SetBinError(6,2989.411);
   looseSel_Jet_2_tau_1hherwig285->SetBinError(7,2566.853);
   looseSel_Jet_2_tau_1hherwig285->SetBinError(8,2266.086);
   looseSel_Jet_2_tau_1hherwig285->SetBinError(9,1999.609);
   looseSel_Jet_2_tau_1hherwig285->SetBinError(10,1547.598);
   looseSel_Jet_2_tau_1hherwig285->SetBinError(11,659.4513);
   looseSel_Jet_2_tau_1hherwig285->SetBinError(12,39.15312);
   looseSel_Jet_2_tau_1hherwig285->SetBinError(13,0.2458139);
   looseSel_Jet_2_tau_1hherwig285->SetEntries(1256427);

   ci = 988;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   looseSel_Jet_2_tau_1hherwig285->SetFillColor(ci);
   looseSel_Jet_2_tau_1hherwig285->SetLineStyle(9);
   looseSel_Jet_2_tau_1hherwig285->SetLineWidth(2);
   looseSel_Jet_2_tau_1hherwig285->SetMarkerStyle(20);
   looseSel_Jet_2_tau_1hherwig285->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   looseSel_Jet_2_tau_1hherwig285->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hherwig285->GetXaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hherwig285->GetXaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hherwig285->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hherwig285->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_2_tau_1hherwig285->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hherwig285->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hherwig285->GetYaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hherwig285->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hherwig285->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hherwig285->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hherwig285->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hherwig285->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hherwig285->Draw("HIST same");
   
   TH1D *looseSel_Jet_2_tau_1hmg286 = new TH1D("looseSel_Jet_2_tau_1hmg286","",20,0,1);
   looseSel_Jet_2_tau_1hmg286->SetBinContent(1,2051.863);
   looseSel_Jet_2_tau_1hmg286->SetBinContent(2,170458);
   looseSel_Jet_2_tau_1hmg286->SetBinContent(3,596967.3);
   looseSel_Jet_2_tau_1hmg286->SetBinContent(4,629462.8);
   looseSel_Jet_2_tau_1hmg286->SetBinContent(5,442107.6);
   looseSel_Jet_2_tau_1hmg286->SetBinContent(6,331771.8);
   looseSel_Jet_2_tau_1hmg286->SetBinContent(7,174044.5);
   looseSel_Jet_2_tau_1hmg286->SetBinContent(8,94071.46);
   looseSel_Jet_2_tau_1hmg286->SetBinContent(9,43103.58);
   looseSel_Jet_2_tau_1hmg286->SetBinContent(10,14560);
   looseSel_Jet_2_tau_1hmg286->SetBinContent(11,2410.574);
   looseSel_Jet_2_tau_1hmg286->SetBinContent(12,206.5377);
   looseSel_Jet_2_tau_1hmg286->SetBinContent(13,3.013057);
   looseSel_Jet_2_tau_1hmg286->SetBinError(1,25.98415);
   looseSel_Jet_2_tau_1hmg286->SetBinError(2,494.6542);
   looseSel_Jet_2_tau_1hmg286->SetBinError(3,19129.9);
   looseSel_Jet_2_tau_1hmg286->SetBinError(4,18941.55);
   looseSel_Jet_2_tau_1hmg286->SetBinError(5,962.7299);
   looseSel_Jet_2_tau_1hmg286->SetBinError(6,20119.04);
   looseSel_Jet_2_tau_1hmg286->SetBinError(7,628.0056);
   looseSel_Jet_2_tau_1hmg286->SetBinError(8,472.4145);
   looseSel_Jet_2_tau_1hmg286->SetBinError(9,329.541);
   looseSel_Jet_2_tau_1hmg286->SetBinError(10,197.3912);
   looseSel_Jet_2_tau_1hmg286->SetBinError(11,83.78118);
   looseSel_Jet_2_tau_1hmg286->SetBinError(12,23.38369);
   looseSel_Jet_2_tau_1hmg286->SetBinError(13,2.296771);
   looseSel_Jet_2_tau_1hmg286->SetEntries(3695211);

   ci = 989;
   color = new TColor(ci, 1, 1, 1, " ", 0);
   looseSel_Jet_2_tau_1hmg286->SetFillColor(ci);
   looseSel_Jet_2_tau_1hmg286->SetLineStyle(2);
   looseSel_Jet_2_tau_1hmg286->SetLineWidth(2);
   looseSel_Jet_2_tau_1hmg286->SetMarkerStyle(20);
   looseSel_Jet_2_tau_1hmg286->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   looseSel_Jet_2_tau_1hmg286->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hmg286->GetXaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hmg286->GetXaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hmg286->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hmg286->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_2_tau_1hmg286->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hmg286->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hmg286->GetYaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hmg286->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hmg286->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hmg286->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hmg286->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hmg286->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hmg286->Draw("HIST same");
   
   TH1D *looseSel_Jet_2_tau_1hqcd287 = new TH1D("looseSel_Jet_2_tau_1hqcd287","",20,0,1);
   looseSel_Jet_2_tau_1hqcd287->SetBinContent(1,2334.013);
   looseSel_Jet_2_tau_1hqcd287->SetBinContent(2,195235);
   looseSel_Jet_2_tau_1hqcd287->SetBinContent(3,606806.4);
   looseSel_Jet_2_tau_1hqcd287->SetBinContent(4,612291);
   looseSel_Jet_2_tau_1hqcd287->SetBinContent(5,436532.1);
   looseSel_Jet_2_tau_1hqcd287->SetBinContent(6,290903.3);
   looseSel_Jet_2_tau_1hqcd287->SetBinContent(7,181470.5);
   looseSel_Jet_2_tau_1hqcd287->SetBinContent(8,103465.3);
   looseSel_Jet_2_tau_1hqcd287->SetBinContent(9,50401.09);
   looseSel_Jet_2_tau_1hqcd287->SetBinContent(10,18111.23);
   looseSel_Jet_2_tau_1hqcd287->SetBinContent(11,3432.899);
   looseSel_Jet_2_tau_1hqcd287->SetBinContent(12,223.4965);
   looseSel_Jet_2_tau_1hqcd287->SetBinContent(13,12.78661);
   looseSel_Jet_2_tau_1hqcd287->SetBinError(1,32.5401);
   looseSel_Jet_2_tau_1hqcd287->SetBinError(2,552.5276);
   looseSel_Jet_2_tau_1hqcd287->SetBinError(3,3634.937);
   looseSel_Jet_2_tau_1hqcd287->SetBinError(4,1516.256);
   looseSel_Jet_2_tau_1hqcd287->SetBinError(5,1436.959);
   looseSel_Jet_2_tau_1hqcd287->SetBinError(6,2660.865);
   looseSel_Jet_2_tau_1hqcd287->SetBinError(7,1145.698);
   looseSel_Jet_2_tau_1hqcd287->SetBinError(8,918.7236);
   looseSel_Jet_2_tau_1hqcd287->SetBinError(9,807.5137);
   looseSel_Jet_2_tau_1hqcd287->SetBinError(10,521.1818);
   looseSel_Jet_2_tau_1hqcd287->SetBinError(11,299.6804);
   looseSel_Jet_2_tau_1hqcd287->SetBinError(12,44.75518);
   looseSel_Jet_2_tau_1hqcd287->SetBinError(13,10.84727);
   looseSel_Jet_2_tau_1hqcd287->SetEntries(1.028162e+07);
   looseSel_Jet_2_tau_1hqcd287->SetDirectory(0);
   looseSel_Jet_2_tau_1hqcd287->SetFillColor(1);
   looseSel_Jet_2_tau_1hqcd287->SetFillStyle(3013);
   looseSel_Jet_2_tau_1hqcd287->SetLineWidth(2);
   looseSel_Jet_2_tau_1hqcd287->SetMarkerStyle(20);
   looseSel_Jet_2_tau_1hqcd287->SetMarkerSize(0);
   looseSel_Jet_2_tau_1hqcd287->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   looseSel_Jet_2_tau_1hqcd287->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hqcd287->GetXaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hqcd287->GetXaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hqcd287->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hqcd287->GetYaxis()->SetTitle("Events / 0.05");
   looseSel_Jet_2_tau_1hqcd287->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hqcd287->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hqcd287->GetYaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hqcd287->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hqcd287->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hqcd287->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hqcd287->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hqcd287->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hqcd287->Draw("E2same");
   
   TH1D *looseSel_Jet_2_tau_1hdata288 = new TH1D("looseSel_Jet_2_tau_1hdata288","",20,0,1);
   looseSel_Jet_2_tau_1hdata288->SetBinContent(1,2021);
   looseSel_Jet_2_tau_1hdata288->SetBinContent(2,185644);
   looseSel_Jet_2_tau_1hdata288->SetBinContent(3,589500);
   looseSel_Jet_2_tau_1hdata288->SetBinContent(4,620821);
   looseSel_Jet_2_tau_1hdata288->SetBinContent(5,445586);
   looseSel_Jet_2_tau_1hdata288->SetBinContent(6,294047);
   looseSel_Jet_2_tau_1hdata288->SetBinContent(7,185238);
   looseSel_Jet_2_tau_1hdata288->SetBinContent(8,105472);
   looseSel_Jet_2_tau_1hdata288->SetBinContent(9,51203);
   looseSel_Jet_2_tau_1hdata288->SetBinContent(10,18237);
   looseSel_Jet_2_tau_1hdata288->SetBinContent(11,3187);
   looseSel_Jet_2_tau_1hdata288->SetBinContent(12,255);
   looseSel_Jet_2_tau_1hdata288->SetBinContent(13,8);
   looseSel_Jet_2_tau_1hdata288->SetBinError(1,44.95553);
   looseSel_Jet_2_tau_1hdata288->SetBinError(2,430.8642);
   looseSel_Jet_2_tau_1hdata288->SetBinError(3,767.789);
   looseSel_Jet_2_tau_1hdata288->SetBinError(4,787.922);
   looseSel_Jet_2_tau_1hdata288->SetBinError(5,667.5223);
   looseSel_Jet_2_tau_1hdata288->SetBinError(6,542.261);
   looseSel_Jet_2_tau_1hdata288->SetBinError(7,430.3928);
   looseSel_Jet_2_tau_1hdata288->SetBinError(8,324.7645);
   looseSel_Jet_2_tau_1hdata288->SetBinError(9,226.2808);
   looseSel_Jet_2_tau_1hdata288->SetBinError(10,135.0444);
   looseSel_Jet_2_tau_1hdata288->SetBinError(11,56.45352);
   looseSel_Jet_2_tau_1hdata288->SetBinError(12,15.96872);
   looseSel_Jet_2_tau_1hdata288->SetBinError(13,2.828427);
   looseSel_Jet_2_tau_1hdata288->SetMinimum(0);
   looseSel_Jet_2_tau_1hdata288->SetMaximum(1176381);
   looseSel_Jet_2_tau_1hdata288->SetEntries(2501219);

   ci = TColor::GetColor("#ff9900");
   looseSel_Jet_2_tau_1hdata288->SetFillColor(ci);
   looseSel_Jet_2_tau_1hdata288->SetLineWidth(2);
   looseSel_Jet_2_tau_1hdata288->SetMarkerStyle(20);
   looseSel_Jet_2_tau_1hdata288->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   looseSel_Jet_2_tau_1hdata288->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hdata288->GetXaxis()->SetLabelSize(0);
   looseSel_Jet_2_tau_1hdata288->GetXaxis()->SetTitleSize(0);
   looseSel_Jet_2_tau_1hdata288->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hdata288->GetYaxis()->SetTitle("Events");
   looseSel_Jet_2_tau_1hdata288->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hdata288->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hdata288->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hdata288->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hdata288->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hdata288->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hdata288->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hdata288->Draw("EPSAME");
   
   TLegend *leg = new TLegend(0.6084422,0.4798951,0.9174874,0.8295455,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("looseSel_Jet_2_tau_1hdata","Data","LEP");
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
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_ZJetsToQQ_HT800toInf_new.root_looseSel_Jet_2_tau_1_hmc","Z+jets","F");
   entry->SetFillColor(47);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_TTHad_pow.root_looseSel_Jet_2_tau_1_hmc","t#bar{t}","F");

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
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_BulkGravToWW_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig","G#rightarrowWW","L");

   ci = TColor::GetColor("#ff6600");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_WprimeToWZToWhadZhad_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig","W'#rightarrowWZ","L");

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("resCP16_latest/controlplots_2017_BulkGravToZZ_narrow_M_2000.root_looseSel_Jet_2_tau_1_hsig","G#rightarrowZZ","L");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(4);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.96,0.904,"77.3 fb^{-1} (2016+2017)(13 TeV)");
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
   
   TH1D *looseSel_Jet_2_tau_1hdata_copy289 = new TH1D("looseSel_Jet_2_tau_1hdata_copy289","",20,0,1);
   looseSel_Jet_2_tau_1hdata_copy289->SetBinContent(1,2021);
   looseSel_Jet_2_tau_1hdata_copy289->SetBinContent(2,185644);
   looseSel_Jet_2_tau_1hdata_copy289->SetBinContent(3,589500);
   looseSel_Jet_2_tau_1hdata_copy289->SetBinContent(4,620821);
   looseSel_Jet_2_tau_1hdata_copy289->SetBinContent(5,445586);
   looseSel_Jet_2_tau_1hdata_copy289->SetBinContent(6,294047);
   looseSel_Jet_2_tau_1hdata_copy289->SetBinContent(7,185238);
   looseSel_Jet_2_tau_1hdata_copy289->SetBinContent(8,105472);
   looseSel_Jet_2_tau_1hdata_copy289->SetBinContent(9,51203);
   looseSel_Jet_2_tau_1hdata_copy289->SetBinContent(10,18237);
   looseSel_Jet_2_tau_1hdata_copy289->SetBinContent(11,3187);
   looseSel_Jet_2_tau_1hdata_copy289->SetBinContent(12,255);
   looseSel_Jet_2_tau_1hdata_copy289->SetBinContent(13,8);
   looseSel_Jet_2_tau_1hdata_copy289->SetBinError(1,44.95553);
   looseSel_Jet_2_tau_1hdata_copy289->SetBinError(2,430.8642);
   looseSel_Jet_2_tau_1hdata_copy289->SetBinError(3,767.789);
   looseSel_Jet_2_tau_1hdata_copy289->SetBinError(4,787.922);
   looseSel_Jet_2_tau_1hdata_copy289->SetBinError(5,667.5223);
   looseSel_Jet_2_tau_1hdata_copy289->SetBinError(6,542.261);
   looseSel_Jet_2_tau_1hdata_copy289->SetBinError(7,430.3928);
   looseSel_Jet_2_tau_1hdata_copy289->SetBinError(8,324.7645);
   looseSel_Jet_2_tau_1hdata_copy289->SetBinError(9,226.2808);
   looseSel_Jet_2_tau_1hdata_copy289->SetBinError(10,135.0444);
   looseSel_Jet_2_tau_1hdata_copy289->SetBinError(11,56.45352);
   looseSel_Jet_2_tau_1hdata_copy289->SetBinError(12,15.96872);
   looseSel_Jet_2_tau_1hdata_copy289->SetBinError(13,2.828427);
   looseSel_Jet_2_tau_1hdata_copy289->SetMinimum(0);
   looseSel_Jet_2_tau_1hdata_copy289->SetMaximum(1176381);
   looseSel_Jet_2_tau_1hdata_copy289->SetEntries(2501219);
   looseSel_Jet_2_tau_1hdata_copy289->SetDirectory(0);

   ci = TColor::GetColor("#ff9900");
   looseSel_Jet_2_tau_1hdata_copy289->SetFillColor(ci);
   looseSel_Jet_2_tau_1hdata_copy289->SetLineWidth(2);
   looseSel_Jet_2_tau_1hdata_copy289->SetMarkerStyle(20);
   looseSel_Jet_2_tau_1hdata_copy289->GetXaxis()->SetTitle("Jet 2 #tau_{1} ");
   looseSel_Jet_2_tau_1hdata_copy289->GetXaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hdata_copy289->GetXaxis()->SetLabelSize(0);
   looseSel_Jet_2_tau_1hdata_copy289->GetXaxis()->SetTitleSize(0);
   looseSel_Jet_2_tau_1hdata_copy289->GetXaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hdata_copy289->GetYaxis()->SetTitle("Events");
   looseSel_Jet_2_tau_1hdata_copy289->GetYaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hdata_copy289->GetYaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hdata_copy289->GetYaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hdata_copy289->GetZaxis()->SetLabelFont(42);
   looseSel_Jet_2_tau_1hdata_copy289->GetZaxis()->SetLabelSize(0.035);
   looseSel_Jet_2_tau_1hdata_copy289->GetZaxis()->SetTitleSize(0.035);
   looseSel_Jet_2_tau_1hdata_copy289->GetZaxis()->SetTitleFont(42);
   looseSel_Jet_2_tau_1hdata_copy289->Draw("sameaxis");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
